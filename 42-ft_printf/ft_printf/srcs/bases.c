/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 11:06:58 by jubonill          #+#    #+#             */
/*   Updated: 2020/12/23 11:41:18 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_putnbr_base(unsigned int nbr, unsigned short size, char *base)
{
	if (nbr >= (unsigned int)size)
		ft_putnbr_base(nbr / size, size, base);
	ft_putchar(base[nbr % size]);
}

void		ft_putnbr_base_ull(unsigned long long nbr,\
unsigned short size, char *base)
{
	if (nbr >= (unsigned long long)size)
		ft_putnbr_base_ull(nbr / size, size, base);
	ft_putchar(base[nbr % size]);
}

void		ft_putnbr_base_count(unsigned int nbr,\
unsigned short size, char *base, int *num_chars)
{
	(*num_chars)++;
	if (nbr >= (unsigned int)size)
		ft_putnbr_base_count(nbr / size, size, base, num_chars);
}

void		ft_putnbr_base_ull_count(unsigned long long nbr, \
unsigned short size, char *base, int *num_chars)
{
	(*num_chars)++;
	if (nbr >= (unsigned long long)size)
		ft_putnbr_base_ull_count(nbr / size, size, base, num_chars);
}
