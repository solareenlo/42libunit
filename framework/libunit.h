/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:14:35 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/09 10:34:49 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list_ut
{
	char				*name;
	int					(*func)(void);
	struct s_list_ut	*next;
}	t_list_ut;

t_list_ut	*ft_lstnew_ut(char *name, int (*func)(void));
t_list_ut	*ft_lstlast_ut(t_list_ut *lst);
void		ft_lstadd_back_ut(t_list_ut **testlist, char *name,
				int (*func)(void));
size_t		ft_strlen(char *s);
void		ft_putstr_fd(char *s, int fd);
int			ft_putstr_err(char *s);

#endif
