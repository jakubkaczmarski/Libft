# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/05 01:24:17 by ankasamanya       #+#    #+#              #
#    Updated: 2021/12/17 23:03:58 by ankasamanya      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strnstr.c ft_isdigit.c ft_putstr_fd.c ft_strlcpy.c ft_strlen.c ft_memcmp.c ft_putnbr_fd.c ft_strchr.c ft_striteri.c ft_bzero.c ft_strjoin.c ft_isascii.c ft_memcpy.c ft_isprint.c ft_putendl_fd.c ft_toupper.c ft_split.c ft_strrchr.c ft_isalpha.c ft_memchr.c ft_putchar_fd.c ft_memset.c ft_substr.c ft_strncmp.c ft_strmapi.c ft_strtrim.c ft_memmove.c ft_strlcat.c ft_calloc.c ft_strdup.c ft_atoi.c ft_isalnum.c ft_itoa.c ft_tolower.c ft_strrev.c ft_intlen.c
OBJ = $(SRC:.c=.o)

CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	ar rsc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re