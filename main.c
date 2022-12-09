/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:31:55 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/29 13:20:36 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char *s = "Salut a tous";
	int	x = -77805;
	int X = x;
	void *p = -48526;
	printf("%% error :\n");
	printf("\ntaille : %d\n", ft_printf("mine : Salut%z a tous"));
	printf("\ntaille : %d\n\n", printf("real : Salut%z a tous"));
	printf("%% at the end :\n");
	printf("\ntaille : %d\n", ft_printf("mine : 123456789%"));
	printf("\ntaille : %d\n\n", printf("real : 123456789%"));
	printf("%%c but without arg :\n");
	printf("\ntaille : %d\n", ft_printf("mine : Salu%ct a tous"));
	printf("\ntaille : %d\n\n", printf("real : Salu%ct a tous"));
	printf("%%c but with wrong arg :\n");
	printf("\ntaille : %d\n", ft_printf("mine : %c", s));
	printf("\ntaille : %d\n\n", printf("real : %c", s));
	printf("Write %% :\n");
	printf("\ntaille : %d\n", ft_printf("mine : Salu%%t a tous"));
	printf("\ntaille : %d\n\n", printf("real : Salu%%t a tous"));
	printf("Testing %%c :\n");
	printf("\ntaille : %d\n", ft_printf("mine : %c", 'd'));
	printf("\ntaille : %d\n\n", printf("real : %c", 'd'));
	printf("Testing %%s :\n");
	printf("\ntaille : %d\n", ft_printf("mine : %s et %s", s, s));
	printf("\ntaille : %d\n\n", printf("real : %s et %s", s, s));
	printf("Testing 2 %%s but with 1 arg :\n");
	printf("\ntaille : %d\n", ft_printf("mine : %s et %s", s));
	printf("\ntaille : %d\n\n", printf("real : %s et %s", s));
	printf("Testing %%p :\n");
	printf("\ntaille : %d\n", ft_printf("mine : %p", p));
	printf("\ntaille : %d\n\n", printf("real : %p", p));
	printf("Testing %%d :\n");
	printf("\ntaille : %d\n", ft_printf("mine : %d", -2147483647));
	printf("\ntaille : %d\n\n", printf("real : %d", -2147483647));
	printf("Testing %%i :\n");
	printf("\ntaille : %d\n", ft_printf("mine : %i", 4685));
	printf("\ntaille : %d\n\n", printf("real : %i", 4685));
	printf("Testing %%u :\n");
	printf("\ntaille : %d\n", ft_printf("mine : %u", -415549816));
	printf("\ntaille : %d\n\n", printf("real : %u", -415549816));
	printf("Testing %%x :\n");
	printf("\ntaille : %d\n", ft_printf("mine : %x", x));
	printf("\ntaille : %d\n\n", printf("real : %x", x));
	printf("Testing %%X :\n");
	printf("\ntaille : %d\n", ft_printf("mine : %X", X));
	printf("\ntaille : %d\n\n", printf("real : %X", X));
	printf("Testing solo %% w/o arg :\n");
	printf("\ntaille : %d\n", ft_printf("%"));
	printf("\ntaille : %d\n\n", printf("%"));
	printf("Testing NULL w/o arg:\n");
	printf("\ntaille : %d\n", ft_printf(NULL, X));
	printf("\ntaille : %d\n\n", printf(NULL, X));
	return (0);
}
