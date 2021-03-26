/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 15:28:51 by jubonill          #+#    #+#             */
/*   Updated: 2021/03/25 18:05:53 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		count_digits(unsigned long long nb)
{
	int					counter;
	unsigned long long	n;

	counter = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		counter++;
		n = nb * -1;
	}
	else
		n = nb;
	while (n)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

void	print_zeros(int zeros)
{
	while (zeros--)
		ft_putchar('0');
}

void	print_spaces(int spaces)
{
	while (spaces--)
		ft_putchar(' ');
}

int		get_zerosblanks(int x, int y)
{
	return ((x > y) ? (x - y) : 0);
}

/*
** Función de trackeo de que cada elemento de nuestra lista
** contenga un elemento válido, en caso contrario, llamamos
** a la función ft_lstclear().
*/

int		check_allocation(t_print **lst)
{
	t_print *tmp;

	tmp = *lst;
	while (tmp)
	{
		if (tmp->arg == NULL)
			break ;
		tmp = tmp->next;
	}
	if (tmp)
	{
		ft_lstclear(lst);
		return (0);
	}
	return (1);
}
