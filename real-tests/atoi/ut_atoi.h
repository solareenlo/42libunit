/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_atoi.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 03:38:11 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 04:07:51 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef UT_ATOI_H
# define UT_ATOI_H

# include <string.h>
# include "../../framework/libunit.h"
# include "../libft/libft.h"

int	atoi_launcher(void);
int	atoi_basic(void);
int	atoi_space(void);
int	atoi_spaces(void);
int	atoi_sign(void);
int	atoi_signs(void);
int	atoi_int_max(void);
int	atoi_int_min(void);
int	atoi_long_max(void);
int	atoi_long_min(void);
int	atoi_zero_zero(void);
int	atoi_null_terminated(void);
int	atoi_null(void);

#endif
