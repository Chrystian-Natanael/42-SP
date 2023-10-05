/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 05:54:17 by cnatanae          #+#    #+#             */
/*   Updated: 2023/10/05 05:54:18 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	idx_a;
	int	idx_b;
	int	*retorn;

	if (min >= max)
	{
		return (NULL);
	}
	idx_a = max - min;
	retorn = malloc (sizeof(int) * idx_a);
	idx_b = 0;
	while (idx_b < idx_a)
	{
		retorn[idx_b] = min + idx_b;
		idx_b++;
	}
	return (retorn);
}
