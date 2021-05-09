/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 10:08:54 by tayamamo          #+#    #+#             */
/*   Updated: 2020/07/01 19:53:52 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*tail;

	if (!lst || !f)
		return (NULL);
	res = NULL;
	while (lst)
	{
		if (!(tail = ft_lstnew(f(lst->content))))
		{
			if (!del)
				return (NULL);
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, tail);
		lst = lst->next;
	}
	return (res);
}
