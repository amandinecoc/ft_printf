/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acocoual <acocoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 21:45:27 by amandine          #+#    #+#             */
/*   Updated: 2025/06/23 17:59:25 by acocoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_args(va_list args, const char c, int len)
{
	if (c == 'c')
		len += ft_putchar_len(va_arg(args, int), len);
	else if (c == 's')
		len += ft_putstr_len(va_arg(args, int), len);
	else if (c == 'p')
		len += ft_putnbr_base_len(va_arg(args, int), LOW_HEXA, len);
	else if (c == 'd' || c == 'i')
		len += ft_putnbr_base_len(va_arg(args, int), TEN, len);
	else if (c == 'u')
		len += ft_putnbr_base_len(va_arg(args, int), TEN, len);
	else if (c == 'x' || c == 'X')
		len += ft_putnbr_base_len(va_arg(args, int), LOW_HEXA, len);
	else if (c == 'X')
		len += ft_putnbr_base_len(va_arg(args, int), UP_HEXA, len);
	else if (c == '%')
		ft_puchar('%');
	return (len + 1);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			len = print_args(args, format[i + 1], len);
			i++;
		}
		else
			len = ft_putchar_len(format[i], len);
		i++;
	}
	va_end(args);
	return (len);
}
