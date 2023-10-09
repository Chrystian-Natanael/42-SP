/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:45:54 by cnatanae          #+#    #+#             */
/*   Updated: 2023/10/09 16:50:12 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"
#include <stdio.h>
#include <ctype.h>

void tt_isascii(int f(int))
{
	int	a;
	int b;

	printf("\nCNET *V1* by: cnatanae - Chrystian Natanael\n\n\n");
	printf("TESTING FT_ISASCII: \n\n");
	
	a = f('c');
	b = isascii('c');
	printf("TEST 1 ('c'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f('3');
	b = isascii('3');
	printf("TEST 2 ('3'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f('\n');
	b = isascii('\n');
	printf("TEST 3 ('NULL'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f('%');
	b = isascii('%');
	printf("TEST 4 ('PORCENTO'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f(127);
	b = isascii(127);
	printf("TEST 5 (127): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f(-1);
	b = isascii(-1);
	printf("TEST 6 (-1): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f(150);
	b = isascii(150);
	printf("TEST 7 (150): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f(' ');
	b = isascii(' ');
	printf("TEST 8 (' '): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");
}