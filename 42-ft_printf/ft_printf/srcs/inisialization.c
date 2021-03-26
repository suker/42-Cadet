/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inisialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 10:01:27 by jubonill          #+#    #+#             */
/*   Updated: 2021/03/25 18:04:19 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_print		*create_lst(int num_specs)
{
	t_print	*new_lst;
	t_print	*tmp;

	if (num_specs-- > 0)
	{
		if (!(tmp = ft_lstnew()))
			return (NULL);
		new_lst = tmp;
	}
	while (num_specs--)
	{
		if (!(tmp = ft_lstnew()))
		{
			ft_lstclear(&new_lst);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, tmp);
	}
	return (new_lst);
}

int			get_spec_idx(const char *s)
{
	int idx;

	if (s[0] == '%')
		return (0);
	idx = -1;
	if (s[0] == ' ')
		idx++;
	while (s[++idx])
	{
		if (!ft_isdigit(s[idx]) && !is_specifier(s[idx]) && s[idx] != '-' \
		&& s[idx] != '.' && s[idx] != '*')
			return (-1);
		if (is_specifier(s[idx]))
			return (idx);
	}
	return (-1);
}

int			num_specifiers(const char *format)
{
	int		index;
	int		n_specs;

	index = -1;
	n_specs = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if ((index = get_spec_idx(format)) == -1)
				return (-1);
			n_specs++;
			while (index-- > 0)
				format++;
		}
		format++;
	}
	return (n_specs);
}

void		fill_lst(const char *format, va_list arg_p, int n_specs, \
t_print **lst)
{
	t_print	*aux;

	if (!(*lst = create_lst(n_specs)))
		return ;
	aux = *lst;
	while (aux)
	{
		format = ft_strchr(format, '%');
		get_flags(&format, &aux);
		get_width(&format, &aux, arg_p);
		get_precision(&format, &aux, arg_p);
		aux->spec = format[get_spec_idx(format)];
		get_argument(&aux, aux->spec, arg_p);
		if (aux->iserror == 1)
		{
			ft_lstclear(lst);
			break ;
		}
		if (*format == '%')
			format++;
		if (aux->spec == '%' && aux->precision >= 0)
			aux->precision = -1;
		aux = aux->next;
	}
}

/*
** Función que inicializa nuestra estructura t_print *lst
** y calcula los valores de sus  parámetros obteniendo flag,
** width, precision, specifier y el argumento recibido.
*/

int			init_lst(const char *format, va_list arg_p, t_print **lst)
{
	int	n_specs;

	n_specs = num_specifiers(format);
	*lst = NULL;
	if (n_specs > 0)
	{
		fill_lst(format, arg_p, n_specs, lst);
		if (*lst == NULL)
			return (0);
		parsing_fields(lst);
		return (check_allocation(lst));
	}
	else if (n_specs == 0)
		return (1);
	return (0);
}
