/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_print.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:29:06 by jubonill          #+#    #+#             */
/*   Updated: 2021/01/21 10:29:08 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_print	*ft_lstnew(void)
{
	t_print	*elem;

	if (!(elem = (t_print *)malloc(sizeof(t_print))))
		return (NULL);
	elem->spec = 0;
	elem->flag = 0;
	elem->width = -1;
	elem->precision = -1;
	elem->numchars = 0;
	elem->numblanks = 0;
	elem->numzeros = 0;
	elem->printspace = 0;
	elem->iserror = 0;
	elem->arg = NULL;
	elem->next = NULL;
	return (elem);
}

void	ft_lstclear(t_print **lst)
{
	t_print *tmp;

	if (!*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		if ((*lst)->arg)
			free((*lst)->arg);
		*lst = tmp;
	}
}

void	ft_lstadd_back(t_print **lst, t_print *new)
{
	t_print *tmp;

	if (!new || !*lst)
	{
		if (!*lst)
			*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
