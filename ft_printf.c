/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:12:01 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/22 18:53:19 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	check_arg(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '%')
		i++;
	
}

int	ft_printf(const char *s, ...)
{
	size_t	i;
	va_list	first_arg;

	i = 0;
	va_start(first_arg, s);
	while (s[i])
	{
	}
}

int	main(void)
{
	ft_printf("Salut a tous");
	printf("Salut a tous");
	return (0);
}
