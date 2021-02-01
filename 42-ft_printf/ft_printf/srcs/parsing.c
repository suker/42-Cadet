/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 14:50:51 by jubonill          #+#    #+#             */
/*   Updated: 2021/01/10 22:43:59 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	free_and_update(t_print **elem)
{
	char	*tmp;

	tmp = ft_strdup((*elem)->arg);
	if ((*elem)->precision == 0 && is_zero((*elem)->arg))
	{
		free((*elem)->arg);
		(*elem)->arg = ft_strdup("");
	}
	else
	{
		free((*elem)->arg);
		(*elem)->arg = ft_substr(tmp, 0, (*elem)->precision);
		if ((*elem)->arg)
			free(tmp);
		(*elem)->numchars = ft_strlen((*elem)->arg);
	}
}

void	parsing_numchars(t_print **elem)
{
	if ((*elem)->arg[0] == '-' && (*elem)->precision != -1 && \
	is_numspec((*elem)->spec))
		(*elem)->precision += 1;
	if ((*elem)->spec == 'c')
		(*elem)->numchars = 1;
	else if ((*elem)->spec == 's' || (*elem)->spec == 'd' || \
	(*elem)->spec == 'i' || (*elem)->spec == 'u' || (*elem)->spec == '%')
		(*elem)->numchars = ft_strlen((*elem)->arg);
	else if ((*elem)->precision != 0 || ((*elem)->precision == 0 && \
	!is_zero((*elem)->arg)))
	{
		if ((*elem)->spec == 'p')
		{
			ft_putnbr_base_ull_count(ft_atoi_ull((*elem)->arg), 16, \
			LHEX_BASE, &(*elem)->numchars);
		}
		else if ((*elem)->spec == 'x' || (*elem)->spec == 'X')
		{
			ft_putnbr_base_count(ft_atoi_u((*elem)->arg), \
			16, LHEX_BASE, &(*elem)->numchars);
		}
		(*elem)->numchars += ((*elem)->spec == 'p') ? 2 : 0;
	}
}

void	parsing_numblanks(t_print **elem)
{
	if ((*elem)->width >= 0)
	{
		if ((*elem)->precision == -1)
			(*elem)->numblanks = get_zerosblanks((*elem)->width, \
			(*elem)->numchars);
		else
		{
			if ((*elem)->spec == 'p')
				(*elem)->numblanks = get_zerosblanks((*elem)->width, \
				(((*elem)->numchars + (*elem)->numzeros) + 2));
			else if ((*elem)->spec == 's')
				(*elem)->numblanks = get_zerosblanks((*elem)->width, \
				(*elem)->numchars);
			else if ((*elem)->spec != 's')
				(*elem)->numblanks = get_zerosblanks((*elem)->width, \
				(((*elem)->numchars + (*elem)->numzeros)));
		}
	}
}

void	parsing_fields(t_print **lst)
{
	t_print	*elem;

	elem = *lst;
	while (elem)
	{
		if (elem->precision == 0 && is_zero(elem->arg))
			free_and_update(&elem);
		if (elem->arg[0] != '\0')
			parsing_numchars(&elem);
		if ((((elem->flag == '0' && elem->width >= 0) || elem->precision != -1)\
		&& is_numspec(elem->spec)) || (elem->spec == '%' && elem->flag == '0'))
		{
			elem->numzeros = (elem->flag == '0' && elem->precision < 0) ? \
			get_zerosblanks(elem->width, elem->numchars) : \
			get_zerosblanks(elem->precision, elem->numchars);
		}
		else if (elem->precision > -1 && elem->spec == 's' && \
		(elem->precision < elem->numchars))
			free_and_update(&elem);
		if (elem->flag != '0' || (elem->width != -1 && elem->precision != -1))
			parsing_numblanks(&elem);
		elem = elem->next;
	}
}
