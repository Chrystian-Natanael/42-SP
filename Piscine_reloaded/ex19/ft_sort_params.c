/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:13:12 by cnatanae          #+#    #+#             */
/*   Updated: 2023/10/04 11:25:15 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

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

void	ft_swap(char **argv, int idx)
{
	char	*tmp;

	tmp = argv[idx];
	argv[idx] = argv[idx + 1];
	argv[idx + 1] = tmp;
}

int	main(int argc, char **argv)
{
	int	idx;
	int	aux;

	if (argc > 1)
	{
		if (argc > 2)
		{
			idx = 0;
			while (++idx < argc - 1)
			{
				aux = ft_strcmp(argv[idx], argv[idx + 1]);
				if (aux > 0)
				{
					ft_swap(argv, idx);
					idx = 0;
				}
			}
		}
		idx = 0;
		while (++idx < argc)
		{
			ft_putstr(argv[idx]);
		}
	}
	return (0);
}
