/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 11:14:41 by jubonill          #+#    #+#             */
/*   Updated: 2020/11/27 16:20:57 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sol;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (!(sol = ft_strnew(len)))
		return (0);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		sol[i] = s[start];
		i++;
		start++;
	}
	return (sol);
}
