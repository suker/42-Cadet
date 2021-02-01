/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 14:48:45 by jubonill          #+#    #+#             */
/*   Updated: 2021/01/09 14:48:48 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	get_flags(const char **s, t_print **lst)
{
	short		i;
	short		isdash;

	isdash = 0;
	i = 0;
	while ((**s == '-' || **s == '0') && **s)
	{
		if (**s == '-')
		{
			(*lst)->flag = '-';
			isdash = 1;
		}
		if (**s == '0')
			(*lst)->flag = '0';
		if ((*lst)->flag == '0' && isdash)
			(*lst)->flag = '-';
		(*s)++;
	}
}

void	get_width(const char **s, t_print **lst, va_list arg_p)
{
	while (**s == ' ' && **s)
	{
		(*s)++;
		(*lst)->printspace = 1;
	}
	if (**s == '*')
	{
		(*lst)->width = va_arg(arg_p, int);
		if ((*lst)->width < 0)
		{
			(*lst)->width = -(*lst)->width;
			(*lst)->flag = '-';
		}
		(*s)++;
	}
	else if (ft_isdigit(**s))
	{
		(*lst)->width = ft_atoi(*s);
		*s += count_digits((*lst)->width);
	}
}

void	get_precision(const char **s, t_print **lst, va_list arg_p)
{
	if (**s == '.')
	{
		(*s)++;
		if ((**s == '0' && is_specifier((*s)[1])) || is_specifier(**s))
		{
			(*lst)->precision = 0;
			if (!is_specifier(**s))
				(*s)++;
		}
		else if (**s == '*' || ft_isdigit(**s))
		{
			(*lst)->precision = (**s == '*') ? va_arg(arg_p, int) : ft_atoi(*s);
			*s += ((**s == '*') ? 1 : count_digits((*lst)->precision));
			while (ft_isdigit(**s) && **s)
				(*s)++;
		}
		else
			(*lst)->iserror = 1;
	}
	else if (!is_specifier(**s))
		(*lst)->iserror = 1;
	if (!is_specifier(**s))
		(*lst)->iserror = 1;
}

void	get_argument(t_print **lst, char c, va_list arg_p)
{
	char	*tmp;

	if (c == 'd' || c == 'i' || c == 'c')
		(*lst)->arg = ft_itoa(va_arg(arg_p, int));
	else if (c == 'u' || c == 'x' || c == 'X')
		(*lst)->arg = ft_itoa_u(va_arg(arg_p, unsigned int));
	else if (c == 's')
	{
		tmp = va_arg(arg_p, char *);
		(*lst)->arg = (tmp) ? ft_strdup(tmp) : ft_strdup("(null)");
	}
	else if (c == 'p')
		(*lst)->arg = ft_itoa_ull(va_arg(arg_p, unsigned long long));
	else if (c == '%')
		(*lst)->arg = ft_strdup("%");
}
