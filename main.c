/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acocoual <acocoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 19:05:03 by acocoual          #+#    #+#             */
/*   Updated: 2025/06/23 19:20:05 by acocoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int nb = 2147;
	char str[] = "leonel est content\n";
	char *strnull = NULL;

	printf("%d\n", printf("int is :%d\n", -nb));
	printf("%d\n", ft_printf("int is :%d\n", -nb));
	printf("------------------\n");
	printf("%d\n", printf("str is :%s", str));
	printf("%d\n", ft_printf("str is :%s", str));
	printf("------------------\n");
	printf("%d\n", printf("char is :%c\n", str[0]));
	printf("%d\n", ft_printf("char is :%c\n", str[0]));
	printf("------------------\n");
	printf("%d\n", printf("HEXA is %X\n", -nb));
	printf("%d\n", ft_printf("HEXA is %X\n", -nb));
	printf("------------------\n");
	printf("%d\n", printf("hexa is %x\n", -nb));
	printf("%d\n", ft_printf("hexa is %x\n", -nb));
	printf("------------------\n");
	printf("%d\n", printf("percent is %%\n"));
	printf("%d\n", ft_printf("percent is %%\n"));
	printf("------------------\n");
	printf("%d\n", printf("pointer is %p\n", &str));
	printf("%d\n", ft_printf("pointer is %p\n", &str));
	printf("------------------\n");
	printf("%d\n", printf("%s\n", strnull));
	printf("%d\n", ft_printf("%s\n", strnull));
	printf("------------------\n");
	printf("%d\n", printf("%p\n", NULL));
	printf("%d\n", ft_printf("%p\n", NULL));
	printf("------------------\n");
}