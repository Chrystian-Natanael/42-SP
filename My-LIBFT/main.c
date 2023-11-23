# include <stdio.h>
# include <fcntl.h>
# include "./include/libft.h"
# include "./include/get_next_line.h"

int main (void)
{
	int	fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	while ((line = get_next_line(fd)))
	{
		printf("%s\n", line);
		free(line);
	}
	close(fd);
	ft_putstr_fd("Press any key to exit..\n", 1);
	return 0;
}