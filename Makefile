# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/15 21:20:50 by mamendes          #+#    #+#              #
#    Updated: 2026/04/16 03:38:52 by mamendes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c \
	  ft_strlen.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	  ft_isprint.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	  ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c \
	   ft_tolower.c ft_toupper.c ft_strncmp.c ft_strnstr.c \
	   ft_memchr.c ft_strdup.c ft_calloc.c  \
	   ft_strjoin.c

OBJ_FILES = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	cc -Wall -Werror -Wextra -c $(SRC) && ar rc $(NAME) $(OBJ_FILES)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re