# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtakashi <rtakashi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 18:49:43 by rtakashi          #+#    #+#              #
#    Updated: 2023/01/14 18:55:13 by rtakashi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = r
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c
# 〇〇.cというファイルに対して〇〇.oを生成する
.c.o:
	$(CC) $(CFLAGS) -c $^ -o $@ -I.

# $@ target名
$(NAME): $(SRCS:.c=.o)
	$(AR) $(ARFLAGS) $(NAME) $(SRCS:.c=.o)

.PHONY: all
all: 
	$(NAME)

.PHONY: clean
clean: $(SRCS:.c=.o)
	rm $(SRCS:.c=.o)

.PHONY: fclean
fclean:
	make clean
	rm -f $(NAME)

.PHONY: re
re:
	make fclean
	make
	