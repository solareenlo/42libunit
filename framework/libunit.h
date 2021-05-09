/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:14:35 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/09 10:57:27 by tayamamo         ###   ########.fr       */
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

t_list_ut	*ut_lstnew(char *name, int (*func)(void));
t_list_ut	*ut_lstlast(t_list_ut *lst);
void		ut_lstadd_back(t_list_ut **testlist, char *name,
				int (*func)(void));
size_t		ut_strlen(char *s);
void		ut_putchar_fd(char c, int fd);
void		ut_putstr_fd(char *s, int fd);
void		ut_putendl_fd(char *s, int fd);
int			ut_putstr_err(char *s);

#endif
