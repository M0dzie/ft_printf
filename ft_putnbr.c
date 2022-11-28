/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:52:48 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/28 16:02:16 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	digit_count(long int n)
{
	size_t	result;

	result = 0;
	if (n == 0)
		result++;
	if (n < 0)
	{
		result++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		result++;
	}
	return (result);
}

/**
 * @brief function that displays a number in the terminal in a given base
 * @param n
 * @param base
 */
int	ft_printnbr_base(int nbr, char *base)
{
	int			len;
	int			count;
	long int	l_nbr;

	l_nbr = nbr;
	count = 0;
	len = ft_strlen(base);
	if (l_nbr < 0)
	{
		l_nbr *= -1;
		ft_printchar('-');
	}
	if (l_nbr >= len)
		ft_printnbr_base((l_nbr / len), base);
	if (l_nbr >= 0)
		ft_printchar(base[l_nbr % len]);
	if (nbr < 0)
		return (digit_count(l_nbr) + 1);
	return (digit_count(l_nbr));
}

int	ft_printunsigned(int nbr, char *base)
{
	int			len;
	int			count;
	long int	l_nbr;

	l_nbr = nbr;
	count = 0;
	len = ft_strlen(base);
	if (l_nbr < 0)
		l_nbr = 4294967296 + l_nbr;
	if (l_nbr >= len)
		ft_printnbr_base((l_nbr / len), base);
	if (l_nbr >= 0)
		ft_printchar(base[l_nbr % len]);
	return (digit_count(l_nbr));
}