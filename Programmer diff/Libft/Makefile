LIB = libft.a
COMP = gcc
FLAGS = -Wall -Wextra -Werror
FILES = ft_isalpha\
		ft_isdigit\
		ft_isalnum\
		ft_isascii\
		ft_isprint\
		ft_strlen\
		ft_memset\
	
OFILES = $(FILES:%=%.o)
CFILES = $(FILES:%=%.c)
NAME = $(LIB)

.phony: all, clean, fclean, re

$(NAME):
	$(COMP) $(FLAGS) -c $(CFILES)
	ar rvc $(LIB) $(OFILES) 

all: $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
