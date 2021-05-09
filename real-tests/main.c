/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 03:44:29 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 05:09:33 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi/ut_atoi.h"
#include "bzero/ut_bzero.h"
#include "calloc/ut_calloc.h"

static void	_put_header(void)
{
	printf("*********************************\n");
	printf("***      42 - Unit Tests      ***\n");
	printf("*********************************\n");
}

int	main(void)
{
	_put_header();
	atoi_launcher();
	bzero_launcher();
	calloc_launcher();
}
