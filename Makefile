# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gehebert <gehebert@42quebec.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/15 06:36:32 by gehebert          #+#    #+#              #
#    Updated: 2021/10/01 09:51:39 by gehebert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# _*_ Makefile _*_

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

SRC = ft_isalpha.c 	ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_memcpy.c ft_bzero.c 	ft_strdup.c \
		ft_calloc.c ft_memcmp.c ft_memchr.c ft_memmove.c ft_strchr.c \
		ft_strcmp.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_strlcat.c \
		ft_strlcpy.c ft_strrchr.c ft_strstr.c ft_strncmp.c 	ft_atoi.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c  \
		ft_strmapi.c mapi_f.c it_t.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c \
	ft_lstclear.c ft_lstdelone.c ft_lstmap.c ft_lstiter.c

BONUS_OBJ = $(BONUS:.c=.o)

SUB = Main.c

all: $(NAME)

OBJ = $(SRC:.c=.o)

$(NAME): 
	$(CC) $(CFLAGS) -c $(SRC)  
	ar rcs $(NAME) $(OBJ)

main: $(NAME)
	$(CC) $(CFLAGS) $(SRC) $(SUB)

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

