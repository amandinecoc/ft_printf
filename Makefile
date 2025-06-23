# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acocoual <acocoual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/23 18:13:39 by acocoual          #+#    #+#              #
#    Updated: 2025/06/23 18:15:12 by acocoual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS += ft_printf.c
SRCS += ft_putstr_len.c
SRCS += ft_putchar_len.c
SRCS += ft_putnbr_base_len.c

NAME := ft_printf.a

CC := cc

CFLAGS += -Wall
CFLAGS += -Werror
CFLAGS += -Wextra

AR := ar

ARFLAGS := rcs

OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re