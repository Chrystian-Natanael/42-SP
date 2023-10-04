/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:24:17 by cnatanae          #+#    #+#             */
/*   Updated: 2023/10/03 10:54:43 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	idx_a;
	int	idx_b;

	idx_a = 1;
	while (idx_a < argc)
	{
		idx_b = 0;
		while (argv[idx_a][idx_b] != '\0')
		{
			ft_putchar(argv[idx_a][idx_b]);
			idx_b++;
		}
		ft_putchar('\n');
		idx_a++;
	}
}
