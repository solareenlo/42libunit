/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:49:00 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/14 09:32:29 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen/ut_strlen.h"
#include "fpe/ut_fpe.h"
#include "create_msg/ut_create_msg.h"
#include "is_prime/ut_is_prime.h"

int	main(void)
{
	int	status;

	ut_put_header();
	status = 0;
	if (strlen_launcher() == -1)
		status = 1;
	if (fpe_launcher() == -1)
		status = 1;
	if (create_msg_launcher() == -1)
		status = 1;
	if (is_prime_launcher() == -1)
		status = 1;
	return (status);
}
