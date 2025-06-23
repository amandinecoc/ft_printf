# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amandine <amandine@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/23 18:13:39 by acocoual          #+#    #+#              #
#    Updated: 2025/06/24 00:28:07 by amandine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC += ft_printf.c
SRC += ft_putstr_len.c
SRC += ft_putchar_len.c
SRC += ft_putnbr_base_len.c

NAME := libftprintf.a

CC := cc

CFLAGS += -Wall
CFLAGS += -Werror
CFLAGS += -Wextra
CFLAGS += -g

AR := ar

ARFLAGS := rcs

OBJ := $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re