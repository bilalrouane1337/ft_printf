/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brouane <brouane@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:37:09 by brouane           #+#    #+#             */
/*   Updated: 2025/11/17 20:13:27 by brouane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "ft_printf.h"

int	format_checker(char c, va_list specifier)
{
	int	counter;

	counter = 0;
	if (c == 'c')
		counter += char_printer(va_arg(specifier, int));
	else if (c == 's')
		counter += string_printer(va_arg(specifier, char *));
	else if (c == 'd' || c == 'i')
		counter += number_printer(va_arg(specifier, int));
	else if (c == 'u')
		counter += unsigned_printer(va_arg(specifier, unsigned int));
	else if (c == 'p')
		counter += address_printer(va_arg(specifier, void *));
	else if (c == 'x')
		counter += lower_hexa_printer(va_arg(specifier, unsigned int));
	else if (c == 'X')
		counter += upper_hexa_printer(va_arg(specifier, unsigned int));
	else if (c == '%')
		counter += char_printer('%');
	else
		counter += char_printer(c);
	return (counter);
}
