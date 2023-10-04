/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:05:32 by cnatanae          #+#    #+#             */
/*   Updated: 2023/10/03 10:21:23 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	idx;
	int	result;

	idx = 0;
	result = 0;
	while (s1[idx] != '\0' || s2[idx] != '\0')
	{
		if (s1[idx] - s2[idx] != 0)
		{
			result = s1[idx] - s2[idx];
			return (result);
		}
		idx++;
	}
	return (0);
}
