# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 10:03:53 by thmeyer           #+#    #+#              #
#    Updated: 2022/12/01 11:05:36 by thmeyer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADER = ft_printf.h

LIBFT_DIR = Libft
LIBFT_HEADER = $(LIBFT_DIR)/libft.h

CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = -rcs

RM = rm -rf

SRCS = ft_printf.c \
	basic_ft.c \
	printnbr.c \
	$(LIBFT_DIR)/ft_strlen.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c Makefile $(HEADER) $(LIBFT_HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJS)
    
fclean: clean
	$(RM) $(NAME)

re: fclean
	make all

.PHONY: all clean fclean re
