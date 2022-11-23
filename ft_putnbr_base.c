/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:06:41 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/23 18:32:58 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
/**
 * @brief function that displays a number in the terminal in a given base
 * @param n
 * @param base
 */
void	ft_putnbr_base(int n, int base)
{
	long int	lng_n;

	lng_n = n;
	if (lng_n < 0)
	{
		lng_n *= -1;
		ft_putchar('-');
	}
	if (lng_n >= base)
		ft_putnbr_base((lng_n / base), base);
	if (lng_n >= 0)
		ft_putchar(lng_n % base + 48);
}

/**
 * @brief function writes the character c on the standard output device
 * @param c
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
