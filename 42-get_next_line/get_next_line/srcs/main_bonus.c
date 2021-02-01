/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 22:13:06 by jubonill          #+#    #+#             */
/*   Updated: 2020/12/18 11:21:49 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int	main(int ac, char *av[])
{
	int ret;
	int fd;
	int fd2;
	char *line;
	
	int i;
	int j;
	int k;
	if (!(fd = open(av[1], O_RDONLY)))
	{
		printf("Error opening the file...\n");
		return (0);
	}
	j = 0;
	while (j++ < 4)
	{
		i = 0;
		k = 0;
		while (i++ < 10 && (ret = get_next_line(fd, &line)) > 0)
		{
			printf("%s\n", line);
			free(line);
		}
		if (ret == 0 && !line)
		{
			printf("%s\n", line);
			free(line);
		}
		if (!(fd2 = open(av[2], O_RDONLY)))
			return (0);
		while ((ret = get_next_line(fd2, &line)) > 0)
		{
			printf("%s\n", line);
			free(line);
		}
		printf("%s", line);
		free(line);
		close(fd2);
	}
	if (ret == -1)
		printf("Error on read() or line parameter fix it!\n");
	close(fd);
	return (0);
}
