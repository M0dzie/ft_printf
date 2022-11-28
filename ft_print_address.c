/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:53:47 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/28 17:39:22 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_address(void *address)
{
	int	len;

	len = 0;
	if (!address)
		return (ft_printstr("0x0"));
	len += ft_printstr("0x");
	len += ft_printunsigned(&address);
	if (len == -1)
		return (-1);
	return (len);
}
