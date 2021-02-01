/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:12:08 by jubonill          #+#    #+#             */
/*   Updated: 2020/11/28 11:23:46 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sol;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (!(sol = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		sol[i] = s[start];
		i++;
		start++;
	}
	sol[i] = '\0';
	return (sol);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*concat;
	unsigned int	i;
	unsigned int	j;

	if (!s1 || !s2)
		return (ft_strdup(""));
	if (!(concat = (char *)malloc(sizeof(char) * \
		(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (0);
	i = -1;
	while (s1[++i] != '\0')
		concat[i] = s1[i];
	j = -1;
	while (s2[++j] != '\0')
		concat[i + j] = s2[j];
	concat[i + j] = '\0';
	return (concat);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	i = -1;
	while (++i < len)
		str[i] = s1[i];
	str[i] = '\0';
	return (str);
}

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*tmp;

	tmp = (char *)s;
	len = ft_strlen(s);
	if (*(tmp + len) == (char)c)
		return (tmp + len);
	while (len--)
	{
		if (*(tmp + len) == (char)c)
			return (tmp + len);
	}
	return (NULL);
}
