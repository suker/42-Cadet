/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 12:43:46 by jubonill          #+#    #+#             */
/*   Updated: 2020/11/18 18:55:46 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	k;

	i = -1;
	while (s1[++i])
		continue;
	k = -1;
	while (++k < n && s2[k])
		s1[i++] = s2[k];
	s1[i] = '\0';
	return (s1);
}
