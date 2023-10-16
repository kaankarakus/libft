# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkarakus <kkarakus@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/10 14:51:11 by kkarakus          #+#    #+#              #
#    Updated: 2023/10/16 17:05:10 by kkarakus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_atoi.c		ft_isalpha.c	ft_isprint.c	ft_memcmp.c		ft_memchr.c		ft_memcpy.c		ft_strnstr.c \
		ft_strlen.c		ft_strchr.c		ft_strrchr.c 	ft_strtrim.c	ft_calloc.c		ft_strdup.c		ft_substr.c		ft_strjoin.c \
		ft_bzero.c		ft_isascii.c	ft_memmove.c	ft_strlcat.c	ft_tolower.c	ft_strncmp.c \
		ft_isalnum.c	ft_isdigit.c	ft_memset.c		ft_split.c		ft_strlcpy.c	ft_toupper.c 
OBJS = $(SRCS:.c=.o)
NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) -c $(SRCS)
	@ar $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)
	@$(RM) *.out
	
re: fclean all

.PHONY: all clean fclean re