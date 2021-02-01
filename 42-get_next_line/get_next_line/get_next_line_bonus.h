/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:12:41 by jubonill          #+#    #+#             */
/*   Updated: 2020/12/22 13:44:15 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef GET_NEXT_LINE_BONUS_H
#	define GET_NEXT_LINE_BONUS_H

#include <limits.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

#	ifndef BUFFER_SIZE
#	define BUFFER_SIZE 1
#	endif

size_t	ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*get_buffer(char **s, char *buffer);
char	*ft_strrchr(const char *s, int c);
char	*ft_strdup(const char *s1);

void	free_and_update(char **s, char *updated);

int		solve(int b_read, char **s, char **line);
int		get_next_line(int fd, char **line);
int		get_line(char **s, char **line);

#	endif
