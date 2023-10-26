/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:41:11 by cnatanae          #+#    #+#             */
/*   Updated: 2023/10/09 08:16:29 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

int		ft_isalpha(int c); /*func verif if is alphabetic (a-z, A-Z)*/
int		ft_isdigit(int c); /*func verif if is digit numeric (0-9)*/
int		ft_isalnum(int c); /*func verif if is alphanumeric (a-z, A-Z, 0-9)*/
int		ft_isascii(int c); /*func verif if c in range 0 - 127 (ASCII)*/
int		ft_isprint(int c); /*func verif if c is printable (32 - 126)*/
size_t	ft_strlen(const char *s); /*func veriflenght of string "s"*/
void	*ft_memset(void *s, int c, size_t n); /*func fill str with a character*/

#endif
