NAME := libft.a

GREEN = \033[32m
YELLOW = \033[33m
PURPLE = \033[35m
RED = \033[31m
WHITE = \033[37m
FCOLOR = \033[0m

SRCS := ft_isalpha.c\
	ft_isdigit.c\
	ft_strlen.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_memset.c\
	ft_bzero.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_strlcpy.c\
	ft_strlcat.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strncmp.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_strnstr.c\
	ft_atoi.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_itoa.c\
	ft_strmapi.c\
	ft_striteri.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c

SRCS_BONUS := ft_lstnew.c\
	ft_lstadd_front.c\
	ft_lstsize.c\
	ft_lstlast.c\
	ft_lstadd_back.c\
	ft_lstdelone.c\
	ft_lstclear.c\
	ft_lstiter.c\
	ft_lstmap.c

OBJS := $(SRCS:.c=.o)

OBJS_BONUS	:= $(SRCS_BONUS:.c=.o)

CC := cc

CFLAGS := -Wall -Wextra -Werror -g3

AR := ar -rcs

RM := rm -rf

all:	$(NAME)
	@echo "$(GREEN)[COMPILED] - OK $(FCOLOR)"
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(YELLOW)[COMPILING] $(FCOLOR)" $<
	@sleep 0.2
	$(AR) $(NAME) $@

$(NAME):	$(OBJS)

bonus:	$(OBJS_BONUS)
	@echo "$(PURPLE)[COMPILING] BONUS $(FCOLOR)"

clean:
	@echo "$(RED)[CLEANING] $(FCOLOR)"
	$(RM) $(OBJS) $(OBJS_BONUS)
	@echo "$(GREEN)[CLEANED] - OK $(FCOLOR)"

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
	@echo "$(GREEN)[RECOMPILED] - OK $(FCOLOR)"

.PHONY:	all clean fclean re bonus
