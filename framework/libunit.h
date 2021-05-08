#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdlib.h>

typedef struct s_ut_list
{
	char				*ut_name;
	int					(*ut_func)(void);
	struct s_ut_list	*next;
}	t_ut_list;

#endif
