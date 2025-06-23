/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandine <amandine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 19:05:03 by acocoual          #+#    #+#             */
/*   Updated: 2025/06/23 23:08:14 by amandine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int		nb;
	char	str[] = "leonel est content\n";
	char	*strnull;

	nb = 2147;
	strnull = NULL;
	printf("%d\n", printf("int is :%d\n", -nb));
	printf("%d\n", ft_printf("int is :%d\n", -nb));
	printf("------------------\n");
	printf("%d\n", printf("int is :%i\n", -nb));
	printf("%d\n", ft_printf("int is :%i\n", -nb));
	printf("------------------\n");
	printf("%d\n", printf("int is :%u\n", -nb));
	printf("%d\n", ft_printf("int is :%u\n", -nb));
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
	// printf("%d\n", printf("arg no exist is %z\n arg exist is %s\n", &str,
	// 		str));
	// printf("%d\n", ft_printf("arg no exist is %z\n arg exist is %s\n", &str,
	// 		str));
	// printf("------------------\n");
	printf("%d\n", printf("juste du texte\n"));
	printf("%d\n", ft_printf("juste du texte\n"));
	printf("------------------\n");
	printf("%d\n", printf(strnull));
	printf("%d\n", ft_printf(strnull));
	printf("------------------\n");
}
