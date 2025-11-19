/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brouane <brouane@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:32:31 by brouane           #+#    #+#             */
/*   Updated: 2025/11/17 20:13:47 by brouane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *string, ...)
{
	va_list	specifier;
	int		printed;
	int		i;

	if (!string)
		return (-1);
	va_start(specifier, string);
	printed = 0;
	i = 0;
	while (string[i])
	{
		if (string[i] == '%' && string[i + 1] == 0)
			return (-1);
		else if (string[i] == '%' && string[i + 1])
			printed += format_checker(string[++i], specifier);
		else
			printed += char_printer(string[i]);
		i++;
	}
	va_end(specifier);
	return (printed);
}
