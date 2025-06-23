/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acocoual <acocoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:33:34 by acocoual          #+#    #+#             */
/*   Updated: 2025/06/23 19:19:35 by acocoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define LOW_HEXA "0123456789abcdef"
# define UP_HEXA "0123456789ABCDEF"
# define TEN "0123456789"

int	ft_printf(const char *format, ...);
int	ft_putchar_len(char c, int len);
int	ft_putstr_len(char *str, int len);
int	ft_putnbr_base_len(long long nb, char *base, int len);
int	ft_putnbr_base_len_ul(unsigned long long nbr, char *base, int len);
int	put_pointer_len(unsigned long long nb, char *base, int len);

#endif