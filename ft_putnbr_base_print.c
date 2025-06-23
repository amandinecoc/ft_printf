/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_print.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acocoual <acocoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:16:12 by acocoual          #+#    #+#             */
/*   Updated: 2025/06/23 17:49:51 by acocoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_putnbr_base_len(int nb, char *base, int len)
{
	long	nbr;
	int		maxbase;

	nbr = nb;
	maxbase = ft_strlen(base);
	if (nbr < 0)
	{
		len = ft_putchar_len('-', len);
		nbr = -nbr;
	}
	if (nbr >= maxbase)
		ft_putnbr_base_len((nbr / maxbase), base, len);
	len = ft_putchar_len(base[nbr % maxbase], len);
    return (len);
}
