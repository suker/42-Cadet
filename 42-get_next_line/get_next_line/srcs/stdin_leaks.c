/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin_leaks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 16:41:15 by jubonill          #+#    #+#             */
/*   Updated: 2020/12/18 16:43:37 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"
#include <stdio.h>

int	main()
{
	char *line = "";

	while (get_next_line(STDIN_FILENO, &line) > 0)
	{
		printf("%s\n", line);
		free(line);
	}
	printf("%s\n", line);
	free(line);
	return (0);
}
