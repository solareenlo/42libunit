/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 03:44:29 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 19:42:24 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi/ut_atoi.h"
#include "bzero/ut_bzero.h"
#include "calloc/ut_calloc.h"
#include "isalnum/ut_isalnum.h"
#include "strchr/ut_strchr.h"
#include "memset/ut_memset.h"

int	main(void)
{
	ut_put_header();
	atoi_launcher();
	bzero_launcher();
	calloc_launcher();
	isalnum_launcher();
	strchr_launcher();
	memset_launcher();
}
