/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:44:36 by cnatanae          #+#    #+#             */
/*   Updated: 2023/10/09 16:45:23 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTER_H
# define TESTER_H
#include <ctype.h>
#include <stddef.h>

void	tt_isalpha(int f(int));
void	tt_isdigit(int f(int));
void	tt_isalnum(int f(int));
void	tt_isascii(int f(int));
void	ft_comp(int a, int b);


int		ft_isalpha(int c); /*func verif if is alphabetic (a-z, A-Z)*/
int		ft_isdigit(int c); /*func verif if is digit numeric (0-9)*/
int		ft_isalnum(int c); /*func verif if is alphanumeric (a-z, A-Z, 0-9)*/
int		ft_isascii(int c); /*func verif if c in range 0 - 127 (ASCII)*/
int		ft_isprint(int c); /*func verif if c is printable (32 - 126)*/
size_t	ft_strlen(const char *s); /*func veriflenght of string "s"*/
void	*ft_memset(void *s, int c, size_t n); /*func fill str with a character*/

#endif