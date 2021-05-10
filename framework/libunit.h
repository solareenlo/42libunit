/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:14:35 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 19:42:18 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdio.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <signal.h>
# include <unistd.h>

# define TIMEOUT 2
# define GREEN "\e[38;2;80;255;80m"
# define RED "\e[38;2;255;40;40m"
# define RESET "\e[0m"

typedef struct s_list_ut
{
	char				*name;
	int					(*func)(void);
	struct s_list_ut	*next;
}	t_list_ut;

int			launch_tests(t_list_ut **testlist);
void		ut_run_child(t_list_ut *test);
void		ut_run_parent(t_list_ut *test, int *passed);
void		ut_put_header(void);
void		ut_putstr_status(char *name, char *res);
int			ut_putstr_err(char *s);

t_list_ut	*ut_lstnew(char *name, int (*func)(void));
t_list_ut	*ut_lstlast(t_list_ut *lst);
void		ut_lstadd_back(t_list_ut **list, char *name, int (*func)(void));
void		ut_lstclear(t_list_ut **lst);

size_t		ut_strlen(char *s);
void		ut_putchar_fd(char c, int fd);
void		ut_putstr_fd(char *s, int fd);
void		ut_putnbr_fd(int n, int fd);
int			ut_strncmp(const char *s1, const char *s2, size_t n);

#endif
