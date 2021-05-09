/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_strlen.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:52:45 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/09 16:56:19 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UT_STRLEN_H
# define UT_STRLEN_H

# include <string.h>
# include "../../framework/libunit.h"
# include "../libft/libft.h"

int	strlen_launcher(void);
int	strlen_ok_test(void);
int	strlen_ko_test(void);
int	strlen_sigsegv_test(void);
int	strlen_sigbus_test(void);
int	strlen_timeout_test(void);

#endif
