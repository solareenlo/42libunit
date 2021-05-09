/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:29:06 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/09 10:43:08 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_list_ut	*ut_lstlast(t_list_ut *lst)
{
	if (!lst)
		return (NULL);
	if (!(lst->next))
		return (lst);
	return (ut_lstlast(lst->next));
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

void	ut_lstadd_back(t_list_ut **testlist, char *name, int (*func)(void))
{
	if (!testlist || !name || !func)
		exit(ut_putstr_err("NULL parameter"));
	if (*testlist)
		ut_lstlast(*testlist)->next = ut_lstnew(name, func);
	else
		*testlist = ut_lstnew(name, func);
}
