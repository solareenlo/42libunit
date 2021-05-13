/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 03:44:29 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/13 11:40:04 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi/ut_atoi.h"
#include "bzero/ut_bzero.h"
#include "calloc/ut_calloc.h"
#include "isalnum/ut_isalnum.h"
#include "strchr/ut_strchr.h"
#include "memset/ut_memset.h"
#include "memccpy/ut_memccpy.h"

int	main(void)
{
	int	status;

	ut_put_header();
	status = 0;
	if (atoi_launcher() == -1)
		status = 1;
	if (bzero_launcher() == -1)
		status = 1;
	if (calloc_launcher() == -1)
		status = 1;
	if (isalnum_launcher() == -1)
		status = 1;
	if (strchr_launcher() == -1)
		status = 1;
	if (memset_launcher() == -1)
		status = 1;
	if (memccpy_launcher() == -1)
		status = 1;
	return (status);
}
