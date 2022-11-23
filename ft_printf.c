/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:12:01 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/23 18:30:28 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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

/**
 * @brief formats and prints its arguments, after the first, under control of 
 * the format
 * @param s
 * @return display messages as well as values on the standard output device
 */
int	ft_printf(const char *s, ...)
{
	va_list	first_arg;
	char	*check_arg;
	int		d;

	va_start(first_arg, s);
	check_arg = check_type(s);
	if (check_arg == ('d'))
	{
		d = va_arg(first_arg, int);
		ft_putnbr_base(d, 10);
	}
	if (check_arg == '\0' || '%')
		ft_putstr_fd(s, 1);
	va_end(first_arg);
}

#include <stdio.h>

int	main(void)
{
	ft_printf("21543");
	printf("Salut a tous");
	return (0);
}
