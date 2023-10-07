.phony: all
all:
	gcc -c ft_display_file.c -o ft_display_file.o
	gcc -Wall -Wextra -Werror ft_display_file.o  -o ft_display_file

.phony: clean
clean:
	rm -f ./*.o

.phony: fclean
fclean: clean
	rm -f ./ft_display_file

.phony: re
re: fclean all