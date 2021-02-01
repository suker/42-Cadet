/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 13:28:28 by jubonill          #+#    #+#             */
/*   Updated: 2020/12/02 21:21:19 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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
