/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandine <amandine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 21:45:27 by amandine          #+#    #+#             */
/*   Updated: 2025/06/23 23:06:38 by amandine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_args(va_list args, const char c, int len)
{
	if (c == 'c')
		len = ft_putchar_len(va_arg(args, int), len);
	else if (c == 's')
		len = ft_putstr_len(va_arg(args, char *), len);
	else if (c == 'p')
		len = put_pointer_len(va_arg(args, unsigned long long), LOW_HEXA, len);
	else if (c == 'd' || c == 'i')
		len = ft_putnbr_base_len(va_arg(args, int), TEN, len);
	else if (c == 'u')
		len = ft_putnbr_base_len_ul(va_arg(args, unsigned int), TEN, len);
	else if (c == 'x')
		len = ft_putnbr_base_len_ul(va_arg(args, unsigned int), LOW_HEXA, len);
	else if (c == 'X')
		len = ft_putnbr_base_len_ul(va_arg(args, unsigned int), UP_HEXA, len);
	else if (c == '%')
		len = ft_putchar_len('%', len);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, format);
	if (!format)
		return (-1);
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
