/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 05:15:22 by cnatanae          #+#    #+#             */
/*   Updated: 2023/10/07 05:15:23 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	ft_error(int ac)
{
	if (ac == 1)
	{
		ft_putstr("File name missing.");
		return (0);
	}
	else if (ac > 2)
	{
		ft_putstr("Too many arguments.");
		return (0);
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int	main(int ac, char **av)
{
	int		file_descriptor;
	char	buffer[1];

	buffer[0] = 0;
	if (ft_error(ac) == 0)
		return (0);
	file_descriptor = open(av[1], O_RDONLY);
	if (file_descriptor < 0)
		ft_putstr("No file");
	while (read(file_descriptor, buffer, 1))
	{
		ft_putchar(*buffer);
	}
	close(file_descriptor);
	return (0);
}
