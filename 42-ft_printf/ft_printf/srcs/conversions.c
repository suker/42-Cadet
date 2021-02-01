/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coversions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:45:13 by jubonill          #+#    #+#             */
/*   Updated: 2021/01/10 22:23:23 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int					ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\v' || c == '\f' || \
		c == '\n' || c == '\r');
}

char						*ft_itoa_u(unsigned int n)
{
	char			*s;
	unsigned short	digits;
	unsigned short	i;

	if (n == 0)
		return (ft_strdup("0"));
	digits = count_digits(n);
	if (!(s = ft_strnew(digits)))
		return (0);
	i = 0;
	while (n)
	{
		s[i++] = (n % 10) + 48;
		n /= 10;
	}
	ft_strrev(s);
	return (s);
}

char						*ft_itoa_ull(unsigned long long n)
{
	char			*s;
	unsigned short	digits;
	unsigned short	i;

	if (n == 0)
		return (ft_strdup("0"));
	digits = count_digits(n);
	if (!(s = ft_strnew(digits)))
		return (0);
	i = 0;
	while (n)
	{
		s[i++] = (n % 10) + 48;
		n /= 10;
	}
	ft_strrev(s);
	return (s);
}

unsigned int				ft_atoi_u(const char *str)
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
	if (nb > UINT_MAX && sign == 1)
		return (-1);
	else if (nb - 1 > UINT_MAX && sign == -1)
		return (0);
	return ((unsigned int)(nb * sign));
}

unsigned long long			ft_atoi_ull(const char *str)
{
	unsigned long long		nb;
	short int				sign;

	sign = 1;
	nb = 0;
	if (*str == '\x7f')
		str += 3;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		sign = (*str++ == '-') ? -1 : 1;
	while (ft_isdigit(*str))
		nb = (nb * 10) + (*str++ - 48);
	if (nb > ULONG_MAX && sign == 1)
		return (-1);
	else if (nb - 1 > ULONG_MAX && sign == -1)
		return (0);
	return ((unsigned long long)(nb * sign));
}
