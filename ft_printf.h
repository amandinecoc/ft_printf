/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acocoual <acocoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:33:34 by acocoual          #+#    #+#             */
/*   Updated: 2025/06/23 18:17:31 by acocoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

# define LOW_HEXA "abcdef0123456789"
# define UP_HEXA "ABCDEF0123456789"
# define TEN "0123456789"

int	ft_printf(const char *format, ...);
int ft_putchar_len(char c, int len);
int ft_putstr_len(char *str, int len);
int	ft_putnbr_base_len(int nb, char *base, int len);


#endif