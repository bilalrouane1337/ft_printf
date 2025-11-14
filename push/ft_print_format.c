/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brouane <brouane@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:03:58 by bmarbouh          #+#    #+#             */
/*   Updated: 2025/11/14 19:27:37 by brouane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char sep, va_list *ap)
{
	int	count;

	count = 0;
	if (sep == 'c')
		count += ft_print_char(va_arg(*ap, int));
	else if (sep == 'd' || sep == 'i')
		count += ft_print_decimal(va_arg(*ap, int));
	else if (sep == 'p')
		count += ft_print_address(va_arg(*ap, void *));
	else if (sep == 's')
		count += ft_print_str(va_arg(*ap, char *));
	else if (sep == 'u')
		count += ft_print_unsigned(va_arg(*ap, unsigned int));
	else if (sep == 'x' || sep == 'X')
		count += ft_print_hex(va_arg(*ap, unsigned int), sep);
	else if (sep == '%')
		count += ft_print_char('%');
	else
		count += ft_print_char(sep);
	return (count);
}
