/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic_ft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:06:41 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/24 13:53:17 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
/**
 * @brief function writes the character c on the standard output device
 * @param c
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/**
 * @brief function writes a string on the standard output device
 * @param str
 */
void	ft_putstr(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

/**
 * @brief compares he null-terminated strings s1 and s2
 * @param s1 
 * @param s2
 * @return an integer greater than, equal to, or less than 0, according as 
 * the string s1 is greater than, equal to, or less than the string s2
 */
int	ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((str1[i] || str2[i]))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}