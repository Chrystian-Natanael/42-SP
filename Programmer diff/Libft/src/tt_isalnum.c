/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:11:13 by cnatanae          #+#    #+#             */
/*   Updated: 2023/10/09 16:51:11 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"
#include <stdio.h>
#include <ctype.h>

void	tt_isalnum(int f(int))
{
	int	a;
	int	b;

	printf("\nCNET *V1* by: cnatanae - Chrystian Natanael\n\n\n");
	printf("TESTING FT_ISALNUM: \n\n");
	a = f('c');
	b = isalnum('c');
	printf("TEST 1 ('c'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f('J');
	b = isalpha('J');
	printf("TEST 2 ('J'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f('3');
	b = isalnum('3');
	printf("TEST 3 ('3'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f('#');
	b = isalnum('#');
	printf("TEST 4 ('#'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f(48);
	b = isalnum(48);
	printf("TEST 5 (48): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f(169);
	b = isalnum(169);
	printf("TEST 6 (169): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f('0');
	b = isalnum('0');
	printf("TEST 7 ('0'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");

	a = f('\0');
	b = isalnum('\0');
	printf("TEST 8 ('NULL'): %d\n", a);
	printf("ORIGIN: %d\n", b);
	printf("STATUS: ");
	ft_comp(a, b);
	printf("\n\n");
	
}
