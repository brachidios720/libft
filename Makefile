# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/07 14:06:14 by rcarbonn          #+#    #+#              #
#    Updated: 2023/06/09 17:02:34 by rcarbonn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = 				ft_isalnum.c \
					ft_isprint.c \
					ft_strncmp.c \
					ft_isalpha.c \
					ft_memcpy.c \
					ft_strchr.c \
					ft_strlcpy.c \
					ft_tolower.c \
					ft_isascii.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_strdup.c \
					ft_strlen.c \
					ft_strrchr.c \
					ft_toupper.c \
					ft_isdigit.c \
					ft_atoi.c \
					ft_memcmp.c \
					ft_strnstr.c \
					ft_bzero.c \
					ft_calloc.c \
					ft_memset.c  \
					ft_memchr.c \
					ft_substr.c \
					ft_strmapi.c \
					ft_strjoin.c \
					ft_putnbr_fd.c \
					ft_putstr_fd.c \
					ft_putchar_fd.c \
					ft_putendl_fd.c \
					ft_strtrim.c \
					ft_split.c \
					ft_strlcat.c \
					ft_itoa.c \
					ft_striteri.c \

# -- Commande -- #

CC    = gcc
RM    = rm -f

# -- SRC -- #

OBJ    = $(SRC:.c=.o)


# -- Target -- #

all:		$(NAME) 

$(NAME): $(OBJ)
		$(CC) -Wall -Werror -Wextra -c $(SRC)
		ar -rc $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:
		$(RM) $(NAME) $(OBJ)

re:		fclean all

.PHONY: all clean fclean re

