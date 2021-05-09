/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 17:05:04 by tayamamo          #+#    #+#             */
/*   Updated: 2020/06/30 16:42:58 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
			|| c == '\r' || c == ' ')
		return (1);
	return (0);
}

static	void	ft_check(int *neg_any_cutlim, int *c, const char **s,
		unsigned long *cutoff)
{
	neg_any_cutlim[0] = 0;
	*c = *((*s)++);
	while (ft_isspace(*c))
		*c = *((*s)++);
	if (*c == '-')
	{
		neg_any_cutlim[0] = 1;
		*c = *((*s)++);
	}
	else if (*c == '+')
		*c = *((*s)++);
	*cutoff = neg_any_cutlim[0] ? -(unsigned long)0x8000000000000000
		: 0x7FFFFFFFFFFFFFFF;
	neg_any_cutlim[2] = *cutoff % (unsigned long)10;
	*cutoff /= (unsigned long)10;
}

static	void	ft_check2(int *c, int *neg_any_cutlim,
		unsigned long *res, unsigned long *cutoff)
{
	if (neg_any_cutlim[1] < 0 || *res > *cutoff ||
			(*res == *cutoff && *c > neg_any_cutlim[2]))
		neg_any_cutlim[1] = -1;
	else
	{
		neg_any_cutlim[1] = 1;
		*res *= 10;
		*res += *c;
	}
}

int				ft_atoi(const char *s)
{
	unsigned long	res;
	int				c;
	unsigned long	cutoff;
	int				neg_any_cutlim[3];

	ft_check(neg_any_cutlim, &c, &s, &cutoff);
	res = 0;
	neg_any_cutlim[1] = 0;
	while (1)
	{
		if (ft_isdigit(c))
			c -= '0';
		else
			break ;
		ft_check2(&c, neg_any_cutlim, &res, &cutoff);
		c = *(s++);
	}
	if (neg_any_cutlim[1] < 0)
		res = neg_any_cutlim[0] ? 0x8000000000000000 : 0x7FFFFFFFFFFFFFFF;
	else if (neg_any_cutlim[0])
		res = -res;
	return ((int)res);
}
