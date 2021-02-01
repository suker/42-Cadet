/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:57:12 by jubonill          #+#    #+#             */
/*   Updated: 2020/12/12 11:24:20 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef GET_NEXT_LINE_H
#	define GET_NEXT_LINE_H

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

#	ifndef BUFFER_SIZE

#	endif

#	ifndef MAX_BUF
#	define MAX_BUF 65536
#	endif

size_t	ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*get_buffer(char **s, char *buffer);
char	*ft_strrchr(const char *s, int c);
char	*ft_strdup(const char *s1);

int		solve(int b_read, char **line, char **s);
int		get_next_line(int fd, char **line);
int		get_line(char **s, char **line);
#	endif
