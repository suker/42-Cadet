/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 13:28:30 by jubonill          #+#    #+#             */
/*   Updated: 2020/12/15 11:11:35 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include GNL_HEADER_CPY

void	free_and_update(char **s, char *tmp)
{
	free(*s);
	*s = tmp;
}

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
		free_and_update(s, tmp);
	}
	else
	{
		*line = ft_strdup(*s);
		free_and_update(s, NULL);
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
		free_and_update(s, buff_data);
	}
	return (*s);
}

int		solve(int b_read, char **line, char **s)
{
	if (!line || b_read < 0)
		return (-1);
	if (b_read == 0 && *s == NULL)
		return (((*line = ft_strdup("")) != NULL) ? 0 : -1);
	return (get_line(s, line));
}

int		get_next_line(int fd, char **line)
{
	static char	*s;
	char		*buff;
	int			b_read;

	if (!(buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	while ((b_read = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[b_read] = '\0';
		s = get_buffer(&s, buff);
		if (ft_strrchr(s, '\n') != NULL)
			break ;
	}
	free_and_update(&buff, NULL);
	return (solve(b_read, line, &s));
}
