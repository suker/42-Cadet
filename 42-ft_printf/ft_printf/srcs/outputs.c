/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outputs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 12:19:50 by jubonill          #+#    #+#             */
/*   Updated: 2021/01/08 12:19:53 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	print_type(t_print *lst)
{
	if (!lst->arg[0])
		return ;
	if (lst->spec == 'd' || lst->spec == 'i' || \
	lst->spec == 'u' || lst->spec == 's')
	{
		if (lst->numzeros && lst->arg[0] == '-')
			ft_putstr(lst->arg + 1);
		else
			ft_putstr(lst->arg);
	}
	else if (lst->spec == 'c')
		ft_putchar((char)ft_atoi(lst->arg));
	else if (lst->spec == 'x')
		ft_putnbr_base(ft_atoi_u(lst->arg), 16, LHEX_BASE);
	else if (lst->spec == 'X')
		ft_putnbr_base(ft_atoi_u(lst->arg), 16, UHEX_BASE);
	else if (lst->spec == 'p')
		ft_putnbr_base_ull(ft_atoi_ull(lst->arg), 16, LHEX_BASE);
	else if (lst->spec == '%')
		ft_putchar('%');
}

void	print_extra(t_print *lst)
{
	if (lst->spec == 'p')
		ft_putstr("0x");
	if (lst->numzeros && lst->arg[0] == '-')
		ft_putchar('-');
}

void	print_template(t_print *lst)
{
	if (lst->printspace == 1)
		ft_putchar(' ');
	if (lst->flag == '-')
	{
		print_extra(lst);
		print_zeros(lst->numzeros);
		print_type(lst);
		print_spaces(lst->numblanks);
	}
	else if (lst->flag == '0')
	{
		print_spaces(lst->numblanks);
		print_extra(lst);
		print_zeros(lst->numzeros);
		print_type(lst);
	}
	else
	{
		print_spaces(lst->numblanks);
		print_extra(lst);
		print_zeros(lst->numzeros);
		print_type(lst);
	}
}
