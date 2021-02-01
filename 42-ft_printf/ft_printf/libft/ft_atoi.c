/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 22:37:35 by jubonill          #+#    #+#             */
/*   Updated: 2020/11/30 17:42:01 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\v' || c == '\f' || \
		c == '\n' || c == '\r');
}

int			ft_atoi(const char *str)
{
	unsigned int	nb;
	short int		sign;

	sign = 1;
	nb = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		sign = (*str++ == '-') ? -1 : 1;
	while (ft_isdigit(*str))
		nb = (nb * 10) + (*str++ - 48);
	if (nb > INT_MAX && sign == 1)
		return (-1);
	else if (nb - 1 > INT_MAX && sign == -1)
		return (0);
	return ((int)(nb * sign));
}
