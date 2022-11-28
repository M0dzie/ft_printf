/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic_ft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:06:41 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/28 15:56:53 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/**
 * @brief function writes the character c on the standard output device
 * @param c
 */
int	ft_printchar(int c)
{
	return (write(1, &c, 1));
}

/**
 * @brief function writes a string on the standard output device
 * @param str
 */
int	ft_printstr(char *str)
{
	if (!str)
		write(1, "(null)", 6);
	return (write(1, str, ft_strlen(str)));
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
