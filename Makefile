# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/20 17:44:44 by cgouiame          #+#    #+#              #
#    Updated: 2022/11/23 19:24:23 by cgouiame         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Werror -Wextra
AR = ar cr
RM = rm -f
FILES = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putnbr_unsigned.c ft_putnbr_hexa.c
OBJ = $(FILES:.c=.o)
NAME = libftprintf.a


all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(FLAGS) -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
