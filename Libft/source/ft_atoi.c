/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:18:31 by cnatanae          #+#    #+#             */
/*   Updated: 2023/10/19 05:13:55 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char *nptr)
{
	int	idx;

	idx = 0;
	while ((nptr[idx] == '\f') || (nptr[idx] == '\n')
		|| (nptr[idx] == '\r') || (nptr[idx] == '\t')
		|| (nptr[idx] == '\v') || (nptr[idx] == ' '))
	{
		idx++;
	}
	return (idx);
}

static char	ft_odd(char c)
{
	char	odd;

	odd = '+';
	if (c == '-')
		odd = '-';
	return (odd);
}

int	ft_atoi(const char *nptr)
{
	char	odd;
	int		value;
	int		idx;

	idx = ft_isspace(nptr);
	odd = ft_odd(nptr[idx]);
	if (nptr[idx] == '+' || nptr[idx] == '-')
		idx++;
	value = 0;
	while (nptr[idx] >= 48 && nptr[idx] <= 57)
	{
		value = value * 10 + (nptr[idx] - '0');
		idx++;
	}
	if (odd == '-')
		return (value * -1);
	return (value);
}
