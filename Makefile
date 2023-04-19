# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raphaelcarbonnel <raphaelcarbonnel@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 12:36:24 by raphaelcarb       #+#    #+#              #
#    Updated: 2023/04/18 17:37:06 by raphaelcarb      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -- Commande -- #

RM    = rm
CC    = gcc
FL    = -Wall -Werror -Wextra
COMP    = $(CC) $(FL)

# -- SRC -- #

SRC =   ft_isalnum.c \
    	ft_isalpha.c \
    	ft_isascii.c \
    	ft_isdigit.c \
    	ft_isprint.c \
    	ft_memchr.c \
    	ft_memcmp.c \
    	ft_memcpy.c \
    	ft_memmove.c \
    	ft_memset.c \
    	ft_atoi.c \
    	ft_bzero.c \
    	ft_strchr.c \
    	ft_strlcat.c \
    	ft_strlcpy.c \
    	ft_strlen.c \
    	ft_strncmp.c \
    	ft_strnstr.c \
    	ft_strrchr.c \
    	ft_tolower.c \
    	ft_toupper.c 

SRCO    = $(SRC:.c=.o)

NAME    = libft.a

# -- Target -- #

all:            $(NAME)

$(NAME):        $(SRCO)
                ar rcs $(NAME) $(SRCO)

clean:
                $(RM) $(SRCO)

fclean:
            $(RM) $(NAME) $(SRCO)

re:                fclean $(NAME)

