# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aennaki <aennaki@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 15:24:07 by aennaki           #+#    #+#              #
#    Updated: 2022/10/20 16:58:30 by aennaki          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
		ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
		ft_tolower.c ft_toupper.c
		
OBJ = $(SRC:.c=.o)

SRC_BONUS =	ft_lstadd_back.c ft_lstadd_front.c ft_lstiter.c ft_lstclear.c \
		ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_lstmap.c ft_lstdelone.c \

BONUS_OBJS = $(SRC_BONUS:.c=.o)

RM = rm -rf

all : $(NAME)

%.o : %.c libft.h
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJ)
	ar -rc $@ $^

bonus: $(BONUS_OBJS)
		ar -rc $(NAME) $(BONUS_OBJS)

clean :
	$(RM) $(OBJ) $(BONUS_OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all bonus clean fclean re
