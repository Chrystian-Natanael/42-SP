/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:03:10 by cnatanae          #+#    #+#             */
/*   Updated: 2023/10/18 11:52:47 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	int	idx_a;
	int	idx_b;

	idx_a = count - 1;
	idx_b = count - 1;
	if (!dest && !src)
		return (0);
	if ((char *)dest > (char *)src && (char *)dest < (char *)src + count)
	{
		while (count--)
			((unsigned char *)dest)[idx_a--] = ((unsigned char *)src)[idx_b--];
	}
	else
	{
		idx_a = 0;
		idx_b = 0;
		while (count--)
			((unsigned char *)dest)[idx_a++] = ((unsigned char *)src)[idx_b++];
	}
	return ((void *)dest);
}
