/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 13:57:23 by jubonill          #+#    #+#             */
/*   Updated: 2020/11/18 18:56:52 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*s1;
	int		len;

	if (*needle == '\0')
		return ((char *)haystack);
	s1 = (char *)haystack;
	len = ft_strlen(needle);
	while (*s1)
	{
		if (ft_strncmp(s1, needle, len) == 0)
			return (s1);
		s1++;
	}
	return (0);
}
