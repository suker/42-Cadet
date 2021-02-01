/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 21:15:36 by jubonill          #+#    #+#             */
/*   Updated: 2021/01/19 21:23:00 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

bool	is_numspec(char c)
{
	return ((c == 'd' || c == 'i' || c == 'u' || c == 'x' || \
c == 'X' || c == 'p') ? 1 : 0);
}

bool	is_charspec(char c)
{
	return ((c == 's' || c == 'c') ? 1 : 0);
}

bool	is_zero(const char *s)
{
	return ((s[0] == '0' && s[1] == '\0') ? 1 : 0);
}

bool	is_specifier(char c)
{
	char	*base;
	int		i;

	i = -1;
	base = "cispduxX%";
	while (base[++i])
		if (base[i] == c)
			return (1);
	return (0);
}
