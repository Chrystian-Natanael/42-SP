/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:39:16 by cnatanae          #+#    #+#             */
/*   Updated: 2023/10/09 14:38:47 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "tester.h"

void	tt_isalpha(int f(int))
{
	int	a;
	int	b;

	printf("\nCNET *V1* by: cnatanae - Chrystian Natanael\n\n\n");
	printf("TESTING FT_ISALPHA: \n\n");
	a = f('c');
	b = isalpha('c');
	printf("TEST 1 ('c'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f('C');
	b = isalpha('C');
	printf("TEST 2 ('C'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f('*');
	b = isalpha('*');
	printf("TEST 3 ('*'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f('8');
	b = isalpha('8');
	printf("TEST 4 ('8'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f('\n');
	b = isalpha('\n');
	printf("TEST 5 ('NULO'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f(5);
	b = isalpha(5);
	printf("TEST 6 (5): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f(' ');
	b = isalpha(' ');
	printf("TEST 7 (' '): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f('#');
	b = isalpha('#');
	printf("TEST 8 ('#'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");
}
