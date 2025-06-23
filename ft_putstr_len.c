/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acocoual <acocoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 18:06:31 by acocoual          #+#    #+#             */
/*   Updated: 2025/06/23 19:20:02 by acocoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_len(char *str, int len)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstr_len("(null)", len));
	while (str[i] != '\0')
	{
		len = ft_putchar_len(str[i], len);
		i++;
	}
	return (len);
}
