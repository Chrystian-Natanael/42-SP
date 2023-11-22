NAME := libft.a
SHELL := /bin/bash

GREEN = \033[32m
YELLOW = \033[33m
PURPLE = \033[35m
RED = \033[31m
WHITE = \033[37m
FCOLOR = \033[0m

PATHSRC := ./source/
PATHOBJ := ./obj/
MKDIR := mkdir -p
SRCS := $(addprefix $(PATHSRC), ft_isalpha.c\
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
	ft_putnbr_fd.c\
	ft_lstnew.c\
	ft_lstadd_front.c\
	ft_lstsize.c\
	ft_lstlast.c\
	ft_lstadd_back.c\
	ft_lstdelone.c\
	ft_lstclear.c\
	ft_lstiter.c\
	ft_lstmap.c\
	get_next_line.c\
	get_next_line_utils.c)

OBJS := $(SRCS:%.c=$(PATHOBJ)%.o)

CC := cc

CFLAGS := -Wall -Wextra -Werror -g3 -O3 -Ofast -flto

AR := ar -rcs

RM := rm -rf

COUNT := 0

all:	$(NAME)
	@printf "$(GREEN)[COMPILED] - OK $(FCOLOR)"

$(PATHOBJ)%.o:%.c
	@$(MKDIR) $(dir $@)
	@sleep 0.0
	@$(eval COUNT=$(shell expr $(COUNT) + 1))
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "Compiling $(YELLOW)LIBFT %d%%\r$(FCOLOR)" $$(echo $$(($(COUNT) * 100 / $(words $(SRCS)))))
	@$(AR) $(NAME) $@

$(NAME):	$(OBJS)

clean:
	@printf "$(RED)[CLEANING - Objects] $(FCOLOR)\n"
	@$(RM) $(PATHOBJ)
	@printf "$(GREEN)[CLEANED] - OK$(FCOLOR)\n"

fclean:	clean
	@$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re bonus
