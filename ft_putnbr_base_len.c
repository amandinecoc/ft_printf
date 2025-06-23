/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_len.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acocoual <acocoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:16:12 by acocoual          #+#    #+#             */
/*   Updated: 2025/06/23 19:19:58 by acocoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putnbr_base_len(long long nbr, char *base, int len)
{
	int	maxbase;

	maxbase = ft_strlen(base);
	if (nbr < 0)
	{
		len = ft_putchar_len('-', len);
		nbr = -nbr;
	}
	if (nbr >= maxbase)
		len = ft_putnbr_base_len((nbr / maxbase), base, len);
	len = ft_putchar_len(base[nbr % maxbase], len);
	return (len);
}

int	ft_putnbr_base_len_ul(unsigned long long nbr, char *base, int len)
{
	int	maxbase;

	maxbase = ft_strlen(base);
	if (nbr >= (unsigned long long)maxbase)
		len = ft_putnbr_base_len((nbr / maxbase), base, len);
	len = ft_putchar_len(base[nbr % maxbase], len);
	return (len);
}

int	put_pointer_len(unsigned long long nb, char *base, int len)
{
	if (!nb)
		return (ft_putstr_len("(nil)", len));
	len = ft_putstr_len("0x", len);
	len = ft_putnbr_base_len_ul(nb, base, len);
	return (len);
}
