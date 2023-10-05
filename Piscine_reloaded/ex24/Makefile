SRCS = ./srcs
HEADER = ./includes
LIB = libft.a
FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJS = $(FILES:.c=.o)

all: $(OBJS)
	ar -rcs $(LIB) $(OBJS) $(HEADER)/*.h

%.o: $(SRCS)/%.c
	cc -c $^ -o $@ 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIB)

re: fclean all
