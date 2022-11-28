# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 10:03:53 by thmeyer           #+#    #+#              #
#    Updated: 2022/11/28 15:54:22 by thmeyer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME = libftprintf.a

# HEADER = libftprintf.h

# LIBFT = Libft/libft.a
# LIBFT_DIR = Libft

# CC = gcc
# CFLAGS = -Wall -Wextra -Werror

# AR = ar
# ARFLAGS = -rcs

# RM = rm -rf

# SRCS = ft_printf.c \
# 	ft_basic_ft.c \
# 	ft_switch.c

# OBJS = $(SRCS:%.c=obj/%.o)

# all: directory rsc $(NAME)

# rsc:
# 	@make -C $(LIBFT_DIR)

# $(NAME): $(OBJS) $(LIBFT)
# 	$(MAKE) -C $(LIBFT_DIR)
# 	cp $(LIBFT) $(NAME)
# 	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

# obj/%.o: %.c Makefile $(HEADER)
# 	$(CC) $(CFLAGS) -I$(HEADER) -o $@ -c $<

# clean:
# 	$(RM) $(OBJS)
# 	$(MAKE) clean -C $(LIBFT_DIR)


# fclean: clean
# 	$(RM) $(NAME)
# 	$(MAKE) fclean -C $(LIBFT_DIR)

# re: fclean all

# directory:
# 	@mkdir obj

# .PHONY: all clean fclean re directory

NAME = libftprintf.a
LIBFT_NAME = libft.a

MAKEFILE = Makefile

HEADER = ft_printf.h

LIBFT_DIR = Libft
PRINTF_DIR = ../printf

LIBFT = $(LIBFT_DIR)/$(LIBFT_NAME)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = -rcs

RM = rm -rf

SRCS = ft_printf.c \
	ft_basic_ft.c \
	ft_putnbr.c \
	ft_print_address.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT) $(PRINTF_DIR)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS) $(LIBFT_NAME)

%.o: %.c $(MAKEFILE) $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C $(LIBFT_DIR)
    
fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIBFT_DIR)

re: fclean all
	$(MAKE) re -C $(LIBFT_DIR)

.PHONY: all clean fclean re
