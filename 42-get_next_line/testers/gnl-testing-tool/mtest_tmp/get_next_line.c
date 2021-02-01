/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 13:28:30 by jubonill          #+#    #+#             */
/*   Updated: 2020/12/10 23:14:05 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_line(char **s, char **line)
{
	char	*tmp;
	size_t	i;

	i = 0;
	while ((*s)[i] != '\n' && (*s)[i])
		i++;
	if ((*s)[i] == '\n')
	{
		*line = ft_substr(*s, 0, i);
		tmp = ft_strdup(*s + i + 1);
		free(*s);
		*s = tmp;
	}
	else
	{
		*line = ft_strdup(*s);
		free(*s);
		*s = NULL;
		return (0);
	}
	return (1);
}

char	*get_buffer(char **s, char *buffer)
{
	char *buff_data;

	if (*s == NULL)
		*s = ft_strdup(buffer);
	else
	{
		buff_data = ft_strjoin(*s, buffer);
		free(*s);
		*s = buff_data;
	}
	return (*s);
}

int		solve(int b_read, char **line, char **s)
{
	if (b_read <= 0)
	{
		if (*s == NULL)
			*line = ft_strdup("");
		if (b_read == 0 && *s == NULL)
			return (0);
		else if (b_read < 0)
			return (-1);
	}
	return (get_line(s, line));
}

int		get_next_line(int fd, char **line)
{
	static char	*s;
	char		buff[BUFFER_SIZE + 1];
	int			b_read;

	while ((b_read = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[b_read] = '\0';
		s = get_buffer(&s, buff);
		if (ft_strrchr(s, '\n') != NULL)
			break ;
	}
	return (solve(b_read, line, &s));
}
