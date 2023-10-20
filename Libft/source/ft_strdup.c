/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:06:27 by cnatanae          #+#    #+#             */
/*   Updated: 2023/10/19 07:59:30 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		idx;

	dup = malloc (sizeof(char) * ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	idx = 0;
	while (*s)
	{
		dup[idx++] = *(s++);
	}
	dup[idx] = '\0';
	return (dup);
}
