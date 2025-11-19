/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   address_printer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brouane <brouane@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 20:53:51 by brouane           #+#    #+#             */
/*   Updated: 2025/11/17 20:12:47 by brouane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	address_printer(void *pointer)
{
	int				counter;
	unsigned long	address;

	counter = 0;
	address = (unsigned long)pointer;
	if (!pointer)
		return (string_printer("(nil)"));
	counter += string_printer("0x");
	counter += long_hexa_printer(address);
	return (counter);
}
