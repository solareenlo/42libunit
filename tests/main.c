/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:49:00 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/16 20:01:26 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen/ut_strlen.h"
#include "create_msg/ut_create_msg.h"
#include "is_prime/ut_is_prime.h"
#include "div/ut_div.h"

int	main(void)
{
	int	status;

	setbuf(stdout, NULL);
	ut_put_header();
	status = 0;
	if (strlen_launcher() == -1)
		status = 1;
	if (create_msg_launcher() == -1)
		status = 1;
	if (is_prime_launcher() == -1)
		status = 1;
	if (div_launcher() == -1)
		status = 1;
	return (status);
}
