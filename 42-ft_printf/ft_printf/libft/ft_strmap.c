/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 20:23:28 by jubonill          #+#    #+#             */
/*   Updated: 2020/11/18 18:55:29 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*sol;
	int		i;

	if (!s || !(*f))
		return (NULL);
	if (!(sol = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = -1;
	while (s[++i])
		sol[i] = (*f)(s[i]);
	return (sol);
}
