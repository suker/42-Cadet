/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 16:34:45 by jubonill          #+#    #+#             */
/*   Updated: 2021/01/22 11:00:09 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void		loop_format(const char *format, t_print *arg_lst, \
int *totalchars)
{
	int		increment;

	while (*format)
	{
		increment = 1;
		if (*format != '%')
		{
			ft_putchar(*format);
			(*totalchars)++;
		}
		else
		{
			format++;
			increment = get_spec_idx(format) + 1;
			print_template(arg_lst);
			*totalchars += arg_lst->numchars + arg_lst->numzeros + \
			arg_lst->numblanks + (int)arg_lst->printspace;
			arg_lst = arg_lst->next;
		}
		format += increment;
	}
}

int				ft_printf(const char *format, ...)
{
	va_list	arg_p;
	t_print	*arg_lst;
	int		totalchars;

	if (!format)
		return (-1);
	va_start(arg_p, format);
	if (init_lst(format, arg_p, &arg_lst) == 0)
		return (-1);
	totalchars = 0;
	loop_format(format, arg_lst, &totalchars);
	ft_lstclear(&arg_lst);
	va_end(arg_p);
	return (totalchars);
}
