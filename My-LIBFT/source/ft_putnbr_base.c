/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:16:42 by cnatanae          #+#    #+#             */
/*   Updated: 2023/11/27 12:17:30 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(long long num, int base)
{
	int			count;

	count = 0;
	if (num < 0)
	{
		count += ft_putchar_fd('-', 1);
		num = -num;
	}
	if (num >= (long long)base)
	{
		count += ft_putnbr_base(num / base, base, min_max);
	}
	count += ft_putchar_fd(HEXAMAX[num % base], 1);
	return (count);
}
