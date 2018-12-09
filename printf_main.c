/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 21:23:49 by nihuynh           #+#    #+#             */
/*   Updated: 2018/12/09 18:11:18 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"
# include <stdio.h>

void test1(void)
{
	ft_printf("Just a string\n");
	ft_printf("%s\n", "Just a string arg");
	ft_printf("Enterlace %s\n", "string");
}

void test2(void)
{
	ft_printf("%d\n", 5000);
	ft_printf("Enterlace %d\n", 5000);
}

void test3(void)
{
	ft_printf("%f\n", 3.14);
	ft_printf("Enterlace %f\n", 3.14);
}


int	main(void)
{
	test1();
	test2();
	test3();
	return (0);
}
