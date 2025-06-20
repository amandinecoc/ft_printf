/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandine <amandine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 21:45:27 by amandine          #+#    #+#             */
/*   Updated: 2025/06/19 22:47:51 by amandine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

// int print_format(const char *format, va_arg, int i, int octet)
// {}

// int ft_printf(const char *format, ...)
// {
//     int i;
//     int octet;

//     i = 0;
//     octet = 0;
//     va_list ap;
//     va_start(ap, format);
//     while (format[i] != '\0')
//     {
//         if (format[i] == '%')
//             print_format(format, va_arg, i, octet);
//         else
//         {
//             ft_putchar(format[i]);
//             octet++;
//         }
//         i++;
//     }
//     return (octet)
// }

// int ft_printf(const char *format, ...)
// {
//     int i;
//     int octet;

//     i = 0;
//     octet = 0;
//     va_list args;
//     va_start(args, format);
//     while (format[i] != '\0')
//     {
//         if (format[i] == '%')
//         {
//             if (format[i = 1] == 'c')
//             {
//                 int res = va_arg(args, int);
//                 ft_putchar(res);
//             }
//             else if (format[i = 1] == 's')
//             {
//                 char *res = va_arg(args, int);
//                 ft_putstr(res);
//             }
//             else if (format[i + 1] == 'p')
//             {
//                 void *res = va_arg(args, int);
//                 ft_putnbr_base(res, "0123456789abcdef");
//             }
//             else if (format[i + 1] == 'd')
//             {
//                 float res = va_arg(args, int);
//                 ft_putnbr_base(res, "0123456789");
//             }
//             else if (format[i + 1] == 'i')
//             {
//                 int res = va_arg(args, int);
//                 ft_putnbr_base(res, "0123456789");
//             }
//             else if (format[i + 1] == 'u')
//             {
//                 unsigned int res = va_arg(args, int);
//                 ft_putnbr_base(res, "0123456789");
//             }
//             else if (format[i + 1] == 'x')
//             {
//                 float res = va_arg(args, int);
//                 ft_putnbr_base(res, "0123456789abcdef");
//             }
//             else if (format[i + 1] == 'X')
//             {
//                 double res = va_arg(args, int);
//                 ft_putnbr_base(res, "0123456789abcdef");
//             }
//             else if (format[i + 1] == '%')
//             {
//                 ft_puchar('%');
//             }
//             else
//                 ft_putstr("Error str");
//             i++;
//         }
//         else
//         {
//             ft_putchar(format[i]);
//             octet++;
//         }
//         i++;
//     }
//     va_end(args);
//     return (octet);
// }

int	print_args(va_list args, const char c)
{
	int				octet;
	int				res;
	char			*res;
	void			*res;
	float			res;
	unsigned int	res;
	float			res;

	octet = 0;
	if (c == 'c')
	{
		res = va_arg(args, int);
		ft_putchar(res);
	}
	else if (c == 's')
	{
		res = va_arg(args, int);
		ft_putstr(res);
	}
	else if (c == 'p')
	{
		res = va_arg(args, int);
		ft_putnbr_base(res, "0123456789abcdef");
	}
	else if (c == 'd' || c == 'i')
	{
		res = va_arg(args, int);
		ft_putnbr_base(res, "0123456789");
	}
	else if (c == 'u')
	{
		res = va_arg(args, int);
		ft_putnbr_base(res, "0123456789");
	}
	else if (c == 'x' || c == 'X')
	{
		res = va_arg(args, int);
		ft_putnbr_base(res, "0123456789abcdef");
	}
	else if (c == '%')
	{
		ft_puchar('%');
	}
	else
		ft_putstr("Error str");
    return (octet + 1);
}

int	ft_printf(const char *format, ...)
{
	int				i;
	int				octet;
	va_list			args;

	i = 0;
	octet = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			print_args(args, format[i + 1]);
            i++;
        }
		else
		{
			ft_putchar(format[i]);
			octet++;
		}
		i++;
	}
	va_end(args);
	return (octet);
}
