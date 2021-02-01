/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 14:06:58 by jubonill          #+#    #+#             */
/*   Updated: 2020/12/02 10:23:57 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;

	if (!s1 || !s2 || !(concat = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (0);
	ft_strcat(concat, s1);
	ft_strcat(concat, s2);
	return (concat);
}
