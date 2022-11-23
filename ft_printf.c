/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:12:01 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/22 19:33:08 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*check_type(const char *s)
{
	size_t	i;

	i = 0;
	while (((char *)s)[i])
	{
		if (s[i - 1] == '%')
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

int	ft_printf(const char *s, ...)
{
	va_list	first_arg;
	char	*check_arg;

	va_start(first_arg, s);
	check_arg = check_type(s);
	if (check_arg == ('\0' || 's'))
		ft_putstr_fd(s);
	if (check_arg == 'c')
		ft_putchar_fd(s, 1);
	va_end(first_arg);
}

int	main(void)
{
	ft_printf("21543");
	printf("Salut a tous");
	return (0);
}
