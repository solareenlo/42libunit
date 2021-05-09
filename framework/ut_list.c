/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:29:06 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/09 20:27:55 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_list_ut	*ut_lstlast(t_list_ut *list)
{
	if (!list)
		return (NULL);
	if (!(list->next))
		return (list);
	return (ut_lstlast(list->next));
}

t_list_ut	*ut_lstnew(char *name, int (*func)(void))
{
	t_list_ut	*new;

	new = malloc(sizeof(t_list_ut));
	if (new == NULL)
		return (NULL);
	new->name = name;
	new->func = func;
	new->next = NULL;
	return (new);
}

void	ut_lstadd_back(t_list_ut **list, char *name, int (*func)(void))
{
	if (!list || !name || !func)
		exit(ut_putstr_err("NULL parameter"));
	if (*list == NULL)
		*list = ut_lstnew(name, func);
	else
		ut_lstlast(*list)->next = ut_lstnew(name, func);
}

void	ut_lstclear(t_list_ut **lst)
{
	t_list_ut	*next;

	if (!lst)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		free(*lst);
		*lst = next;
	}
	*lst = NULL;
}
