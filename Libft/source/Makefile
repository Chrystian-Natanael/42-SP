COMP = cc
FLAGS = -Wall -Wextra -Werror
FILES = ft_isalpha\
		ft_isdigit\
		ft_isalnum\
		ft_isascii\
		ft_isprint\
		ft_strlen\
		ft_memset\
		ft_bzero\
		ft_memcpy\
		ft_memmove\
		ft_strlcat\
		ft_strlcpy\
		ft_toupper\
		ft_tolower\
		ft_strchr\
		ft_strrchr\
		ft_strncmp\
		ft_memchr\
		ft_strnstr\
		ft_memcmp\
		ft_atoi\
		ft_calloc\
		ft_strdup\
		ft_substr\
		ft_strjoin\
		ft_strtrim\
		ft_split\
		ft_atoi\
		ft_itoa\
		ft_strmapi\
		ft_striteri\
		ft_putchar_fd\
		ft_putstr_fd\
		ft_putendl_fd\
		ft_putnbr_fd

OFILES = $(FILES:%=%.o)
CFILES = $(FILES:%=%.c)
NAME = libft.a

BFILES = ft_lstnew.c\
		 ft_lstadd_front.c\
		 ft_lstsize.c\
		 ft_lstlast.c\
		 ft_lstadd_back.c\
		 ft_lstdelone.c\
		 ft_lstclear.c\
		 ft_lstiter.c\
		 ft_lstmap.c

BOFILES = $(BFILES:%.c=%.o)

.phony: all, clean, fclean, re, bonus

$(NAME):
	$(COMP) -Ilibft.h $(FLAGS) -c $(CFILES)
	ar rvc $(NAME) $(OFILES) 

all: $(NAME)

bonus: $(BFILES)
	$(COMP) -Ilibft.h $(FLAGS) -c $(BFILES) $(CFILES)
	ar rvc $(NAME) $(BOFILES) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME) $(BOFILES)

re: fclean all
