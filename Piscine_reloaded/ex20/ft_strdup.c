/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:37:45 by cnatanae          #+#    #+#             */
/*   Updated: 2023/10/04 14:37:47 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		idx++;
	}
	return (idx);
}

char	*ft_strdup(char *str)
{
	char	*dup;
	int		idx;

	dup = malloc (sizeof(char) * ft_strlen(str) + 1);
	idx = 0;
	while (*str)
	{
		dup[idx++] = *(str++);
	}
	dup[idx] = '\0';
	return (dup);
}
