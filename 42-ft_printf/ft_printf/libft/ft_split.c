/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 20:17:10 by jubonill          #+#    #+#             */
/*   Updated: 2020/11/25 14:16:39 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char		**ft_malloc_error(char **arr, int idx)
{
	int i;

	i = -1;
	while (++i < idx)
		free(arr[i]);
	free(arr);
	return (NULL);
}

static int		ft_num_words(char const *s, char c)
{
	unsigned int		i;
	unsigned int		words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (!s[i])
			break ;
		while (s[i] != c && s[i])
			i++;
		words++;
	}
	return (words);
}

char			**ft_split(char const *s, char c)
{
	char	**split;
	int		num_words;
	int		i;
	int		k;
	int		start;

	if (!s)
		return (NULL);
	num_words = ft_num_words(s, c);
	if (!(split = (char **)malloc(sizeof(char *) * (num_words + 1))))
		return (NULL);
	i = -1;
	k = -1;
	while (++i < num_words)
	{
		while (s[++k] && s[k] == c)
			continue ;
		start = k;
		while (s[k] && s[k] != c)
			k++;
		if (!(split[i] = ft_substr(s, start, k - start)))
			return (ft_malloc_error(split, i));
	}
	split[i] = NULL;
	return (split);
}
