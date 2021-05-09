/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_ut.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:29:06 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/09 10:36:09 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_list_ut	*ft_lstlast_ut(t_list_ut *lst)
{
	if (!lst)
		return (NULL);
	if (!(lst->next))
		return (lst);
	return (ft_lstlast_ut(lst->next));
}

t_list_ut	*ft_lstnew_ut(char *name, int (*func)(void))
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

void	ft_lstadd_back_ut(t_list_ut **testlist, char *name, int (*func)(void))
{
	if (!testlist || !name || !func)
		exit(ft_putstr_err("NULL parameter"));
	if (*testlist)
		ft_lstlast_ut(*testlist)->next = ft_lstnew_ut(name, func);
	else
		*testlist = ft_lstnew_ut(name, func);
}
