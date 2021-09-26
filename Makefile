# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gehebert <gehebert@42quebec.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/15 06:36:32 by gehebert          #+#    #+#              #
#    Updated: 2021/09/24 10:21:46 by gehebert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# _*_ Makefile _*_
#
#

NAME= libft

CC= gcc

CFLAGS= -Wall -Werror -Wextra

RM= rm -f

SRC = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_memcpy.c \
	ft_bzero.c \
	ft_strdup.c \
	ft_calloc.c \
	ft_memcmp.c \
	ft_memchr.c \
	ft_memmove.c \
	ft_strchr.c \
	ft_strcmp.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strnstr.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strrchr.c \
	ft_strstr.c \
	ft_strncmp.c \
	ft_atoi.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	MainTest.c 
	

OBJ= $(SRC:.c=.o)

$(NAME): 
	@$(CC) $(CFLAGS) -c $(SRC) 
	@ar rcs $(NAME) $(OBJ)
	
mainTest: $(SRC) 
	$(CC) $(CFLAGS) $(SRC)


all: $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

#.PHONY:  clean fclean

