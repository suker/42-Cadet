/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 13:28:30 by jubonill          #+#    #+#             */
/*   Updated: 2021/03/25 17:48:25 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	free_and_update(char **s, char *updated)
{
	free(*s);
	*s = updated;
}

/*
** Analiza la linea a retornar.
** Si en `s` hay mas newlines, movemos el puntero a una posicion más.
** adelante al salto de linea y reasignamos memoria.
**
** Si `s` es la ultima línea, liberamos memoria de s y le asignamos a `line`
** el contenido de ésta.
*/

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

/*
** Función que concatena el contenido de la variable buffer dentro
** de nuestra variable estática para la persistencia de la información.
*/

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

int		solve(int b_read, char **s, char **line)
{
	if (b_read < 0)
		return (-1);
	if (b_read == 0 && *s == NULL)
		return (((*line = ft_strdup("")) != NULL) ? 0 : -1);
	return (get_line(s, line));
}

/*
** 1. Comprobamos posibles errores.
** 2. leeremos BUFFER_SIZE bytes hasta un '\n' o b_read retorne -1 o 0.
** 3. Almacenamos todo lo que leamos en nuestra variable estatica s.
** 4. liberamos memoria del buffer.
** 5. Analizamos el contenido de s y retornamos una string en `line'
*/

int		get_next_line(int fd, char **line)
{
	static char	*s;
	char		*buff;
	int			b_read;

	if (!line || BUFFER_SIZE >= INT_MAX || BUFFER_SIZE < 1 \
		|| !(buff = (char *)malloc((BUFFER_SIZE + 1))))
		return (-1);
	while ((b_read = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[b_read] = '\0';
		s = get_buffer(&s, buff);
		if (ft_strrchr(s, '\n') != NULL)
			break ;
	}
	free_and_update(&buff, NULL);
	return (solve(b_read, &s, line));
}
