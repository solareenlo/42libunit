/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strlen_segv_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 16:44:47 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/09 16:56:26 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_strlen.h"

int	strlen_sigsegv_test(void)
{
	if (ft_strlen(NULL) == strlen("42tokyo"))
		return (0);
	else
		return (-1);
}
