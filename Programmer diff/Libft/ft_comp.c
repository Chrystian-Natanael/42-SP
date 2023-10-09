/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:44:39 by cnatanae          #+#    #+#             */
/*   Updated: 2023/10/09 16:24:04 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"
#include <stdio.h>

void	ft_comp(int a, int b)
{
	if (a == b)
	{
		printf("OK ;D");
	}
	else if (b != 0 && a != 0)
	{
		printf("OK ;D");
	}
	else
	{
		printf("ERROR!");
	}
}
