/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 16:34:45 by jubonill          #+#    #+#             */
/*   Updated: 2021/03/25 18:26:15 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
** 			Lógica de FT_PRINTF
** *************************************************************************
** 1. Crear una lista de estructuras de tipo t_print por cada vez que
** encontramos un '%' dentro de nuestra variable `format`.
**
** 2. Rellenar cada elemnto de la lista los valore de sus variables.
**
** 3. Comprobar si hay errores en la syntaxis del formato ('%').
**
** 4. printf retorna el número de caracteres printeados en la salida
** estándar, en caso de error: retorna -1.
*/

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
