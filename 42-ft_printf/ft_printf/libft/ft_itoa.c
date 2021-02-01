/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 11:45:01 by jubonill          #+#    #+#             */
/*   Updated: 2020/11/18 18:50:35 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_digits_count(int n)
{
	int c;

	if (n == 0)
		return (1);
	c = (n < 0) ? 1 : 0;
	while (n)
	{
		c++;
		n /= 10;
	}
	return (c);
}

char		*ft_itoa(int n)
{
	char			*s;
	unsigned int	digits;
	unsigned int	nb;
	unsigned int	i;

	if (n == 0)
		return (ft_strdup("0"));
	digits = ft_digits_count(n);
	if (!(s = ft_strnew(digits)))
		return (NULL);
	i = 0;
	nb = n;
	if (n < 0)
	{
		s[0] = '-';
		i++;
		nb = n * -1;
	}
	while (nb)
	{
		s[i++] = (nb % 10) + 48;
		nb /= 10;
	}
	ft_strrev(s);
	return (s);
}
