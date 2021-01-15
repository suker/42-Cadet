/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 12:43:12 by jubonill          #+#    #+#             */
/*   Updated: 2020/11/18 18:52:42 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	char	*dst_cp;
	char	*src_cp;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_cp = (char *)dst;
	src_cp = (char *)src;
	if (dst_cp > src_cp)
	{
		while (len--)
			dst_cp[len] = src_cp[len];
	}
	else if (dst_cp < src_cp)
		ft_memcpy(dst, src, len);
	return (dst);
}
