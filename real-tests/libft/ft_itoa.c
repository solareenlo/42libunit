/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 10:53:25 by tayamamo          #+#    #+#             */
/*   Updated: 2020/07/18 21:37:44 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_set(char *s, int n, size_t cnt)
{
	long long	tmp;

	tmp = n;
	tmp = (n < 0) ? -tmp : tmp;
	*(s + cnt) = '\0';
	if (n == 0)
	{
		*s = '0';
		return ;
	}
	cnt--;
	while (tmp)
	{
		*(s + cnt) = tmp % 10 + '0';
		cnt--;
		tmp /= 10;
	}
	if (n < 0)
		*s = '-';
}

char			*ft_itoa(int n)
{
	char		*s;
	long long	tmp;
	size_t		cnt;

	tmp = n;
	tmp = (n < 0) ? -tmp : tmp;
	cnt = (n <= 0) ? 1 : 0;
	while (tmp)
	{
		tmp /= 10;
		cnt++;
	}
	if (!(s = (char *)malloc(sizeof(char) * (cnt + 1))))
		return (NULL);
	ft_set(s, n, cnt);
	return (s);
}
