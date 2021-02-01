/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 21:57:49 by jubonill          #+#    #+#             */
/*   Updated: 2021/01/28 16:35:05 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"
#include <stdio.h>

int		main()
{
	int printedchars2;
	int printedchars;

	char	*o = "-a";
	printedchars2 =0;
	ft_putstr("\nORIGINAL PRINTF FUNCTION: \n");
	printedchars2 = printf("<%-10c>", 'a');
	printf("\nprinted chars: %d\n", printedchars2);
	ft_putstr("\nMY PRINT_F FUNCTION: \n");
	printedchars = ft_printf("<%-10c>", 'a');
	ft_printf("\nprinted chars: %d\n\n", printedchars);\
	while (true)
			continue ;
	return(0);
}
