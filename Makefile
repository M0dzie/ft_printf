# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 10:03:53 by thmeyer           #+#    #+#              #
#    Updated: 2022/11/23 16:52:14 by thmeyer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
NAME_LIB = libft.a

HEADER = libftprintf.h
HEADER_DIR = ../Libft
PRINTF_DIR = ../ft_printf/

CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = -rcs

RM = rm -rf

SRC_LIB = 

SRCS = ft_printf.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(HEADER_DIR)
	cp $(HEADER_DIR) $(NAME_LIB) $(PRINTF_DIR)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS) $(NAME_LIB)

%.o: %.c Makefile $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJ)
	$(MAKE) clean -C $(HEADER_DIR)


fclean: clean
	$(RM) $(NAME) $(NAME_LIB)
	$(MAKE) fclean -C $(HEADER_DIR)

re: fclean all
	$(MAKE) re -C $(HEADER_DIR)
		
.PHONY: all clean fclean re
