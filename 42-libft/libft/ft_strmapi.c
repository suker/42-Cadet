/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 20:31:04 by jubonill          #+#    #+#             */
/*   Updated: 2020/11/18 18:55:38 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*sol;
	int		i;

	if (!s || !(*f))
		return (NULL);
	if (!(sol = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = -1;
	while (s[++i])
		sol[i] = (*f)(i, s[i]);
	return (sol);
}
