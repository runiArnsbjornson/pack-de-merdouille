# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdebladi <jdebladi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 18:34:05 by jdebladi          #+#    #+#              #
#    Updated: 2016/12/19 12:02:48 by jdebladi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
AR = ar rc
INCL = libft.h
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_abs.c \
	ft_atoi.c \
	ft_bool_strchr.c \
	ft_bzero.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_islower.c \
	ft_isprint.c \
	ft_isprime.c \
	ft_isspace.c \
	ft_isupper.c \
	ft_itoa.c \
	ft_itoa_base.c \
	ft_lstadd.c \
	ft_lstdel.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_memalloc.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memdel.c \
	ft_memmove.c \
	ft_memset.c \
	ft_occurence.c \
	ft_putchar.c \
	ft_putchar_fd.c \
	ft_putendl.c \
	ft_putendl_fd.c \
	ft_putnbr.c \
	ft_putnbr_fd.c \
	ft_putstr.c \
	ft_putstr_fd.c \
	ft_puttab.c \
	ft_puttab_fd.c \
	ft_pwr.c \
	ft_replace.c \
	ft_split.c \
	ft_sqrt.c \
	ft_strcat.c \
	ft_strchr.c \
	ft_strclr.c \
	ft_strcmp.c \
	ft_strcpy.c \
	ft_strdel.c \
	ft_strdup.c \
	ft_strequ.c \
	ft_stris.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strmap.c \
	ft_strmapi.c \
	ft_strncat.c \
	ft_strncmp.c \
	ft_strncpy.c \
	ft_strnequ.c \
	ft_strnew.c \
	ft_strnstr.c \
	ft_strrealloc.c \
	ft_strrchr.c \
	ft_strrev.c \
	ft_strsplit.c \
	ft_strstr.c \
	ft_strsub.c \
	ft_strtrim.c \
	ft_tab.c \
	ft_tolower.c \
	ft_toupper.c \
	get_next_line.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	@echo "\033[K\033[34mLibft :\033[0m [ Compiling :\033[33m $^\033[0m]\033[1A"
	@$(CC) -g -o $@ -c $< $(CFLAGS) -I $(INCL)

clean:
	@/bin/rm -f $(OBJ)
	@echo "\033[31mRemoval\033[0m  " [ "*.o" ] "  \033[32mComplete\033[0m"

re: fclean all
	@echo "\033[32m*** Let's start anew ***\033[00m"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\033[31mRemoval\033[0m" [ $(NAME) ] "\033[32mComplete\033[0m"

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[34mCompiling\033[0m" [ $(NAME) ] "\033[K\033[32mSuccessful\033[0m"

.PHONY : all clean fclean re
