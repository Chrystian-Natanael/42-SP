/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:46:24 by cnatanae          #+#    #+#             */
/*   Updated: 2023/10/09 16:09:39 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"
#include <stdio.h>
#include <ctype.h>

void	tt_isdigit(int f(int))
{
	int	a;
	int b;

	printf("\nCNET *V1* by: cnatanae - Chrystian Natanael\n\n\n");
	printf("TESTING FT_ISDIGIT: \n\n");

	a = f('c');
	b = isdigit('c');
	printf("TEST 1 ('c'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f('1');
	b = isdigit('1');
	printf("TEST 2 ('1'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f(' ');
	b = isdigit(' ');
	printf("TEST 3 (' '): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f('@');
	b = isdigit('@');
	printf("TEST 4 ('@'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f('\n');
	b = isdigit('\n');
	printf("TEST 5 ('NULL'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f(8);
	b = isdigit(8);
	printf("TEST 6 (8): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f(54);
	b = isdigit(54);
	printf("TEST 7 (54): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f('3');
	b = isdigit('3');
	printf("TEST 8 ('3'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");
}