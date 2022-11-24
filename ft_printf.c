/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:12:01 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/24 13:59:36 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// static void	check_type(const char *s)
// {
// 	size_t	i;
// 	char	*set;

// 	i = 0;
// 	set = "cspdiuxX";
// 	while (s[i])
// 	{
// 		if (s[i - 1] == '%' && ft_strcmp(s, set))
// 			return ((char)s[i]);
// 		i++;
// 	}
// }

/**
 * @brief formats and prints its arguments, after the first, under control of 
 * the format
 * @param s
 * @return display messages as well as values on the standard output device
 */
int	ft_printf(const char *format, ...)
{
	(void)format;
	return (0);
	va_list	arg;
	size_t	len;
	char	*set;

	len = 0;
	set = "cspiudxX";
	va_start(arg, format);
	if (write(1, 0, 0) != 0)
		return (-1);
	while (format[len])
	{
		if (format[len - 1] == '%' && ft_strcmp(format, set))
			len += ft_switch(&arg, format + len);
		else if (format[len - 1] == '%' && format[len] == '%')
			ft_putstr(format); //supprimer un %
		len++;
	}
	va_end(arg);
	return (len);
}

#include <stdio.h>

int	main(void)
{
	int i = 0;
	ft_printf("Salut a tous");
	printf("\n");
	printf("Salut a tous\n");
	ft_printf("Salu%%t a tous");
	printf("\n");
	printf("Salu%%t a tous\n");
	ft_printf("123456789");
	printf("\n");
	printf("123456789\n");
	ft_printf("%d", i);
	printf("\n");
	printf("%d\n", i);
	return (0);
}

//renvoyer une len qu'il faut calculer depuis le debut / mais aussi 
//des arguments
//si oui, renvoyer sur une fonction qui va_arg et qui set le bon type 
//(int, char, etc)
//faire une fonction pour chaque type

//bien reutiliser mes fonctions_fd
