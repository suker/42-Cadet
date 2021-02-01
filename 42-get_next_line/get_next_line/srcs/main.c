/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 22:13:06 by jubonill          #+#    #+#             */
/*   Updated: 2020/12/18 11:27:17 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"
#include <stdio.h>
# include <fcntl.h>

int	main(int ac, char *av[])
{
	int ret;
	int fd;

	char *line;
	
	if (ac < 2)
	{
		while ((ret = get_next_line(STDIN_FILENO, &line)) > 0)
		{
			printf("%s\n", line);
			free(line);
		}
		if (line != NULL)
		{
			printf("%s\n", line);
			free(line);
		}
	}
	else if (ac == 2)
	{
		if (!(fd = open(av[1], O_RDONLY)))
		{
			printf("Error opening the file...\n");
			return (0);
		}
		while ((ret = get_next_line(fd, &line)) > 0)
		{
			printf("%s\n", line);
			free(line);
		}
		if (ret == -1)
			printf("Error on read() or line parameter fix it!\n");
		if (line != NULL)
		{
			printf("%s", line);
			free(line);
		}
	}
	else
		printf("missing just single file...\n");
	return (0);
}
