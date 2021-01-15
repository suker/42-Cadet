/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 14:16:31 by jubonill          #+#    #+#             */
/*   Updated: 2020/11/26 10:53:04 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s, char const *set)
{
	unsigned int	s_len;
	unsigned int	start;

	if (!s)
		return (NULL);
	if (!set || *set == '\0')
		return (ft_strdup((char *)s));
	start = 0;
	while (ft_isset(s[start], set))
		start++;
	if (s[start] == '\0')
		return (ft_strnew(0));
	s_len = ft_strlen(s) - 1;
	while (s_len && ft_isset(s[s_len], set))
		s_len--;
	return (ft_substr(s, start, s_len - start + 1));
}
