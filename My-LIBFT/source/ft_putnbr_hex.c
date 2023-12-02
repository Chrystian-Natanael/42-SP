/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:20:52 by cnatanae          #+#    #+#             */
/*   Updated: 2023/12/02 18:35:11 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_putnbr_hex(long long num)
{
	int			count;

	count = 0;
	if (num < 0)
	{
		count += ft_putchar_fd('-', 1);
		num = -num;
	}
	if (num >= 16)
		count += ft_putnbr_hex(num / 16);
	count += ft_putchar_fd(HEXAMIN[num % 16], 1);
	return (count);
}
