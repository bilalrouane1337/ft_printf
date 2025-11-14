/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarbouh <bmarbouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:26:12 by bmarbouh          #+#    #+#             */
/*   Updated: 2025/11/12 14:35:20 by bmarbouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_hex_ptr(unsigned long nb)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
		count += ft_print_hex_ptr(nb / 16);
	count += ft_print_char(base[nb % 16]);
	return (count);
}

int	ft_print_address(void *ptr)
{
	int				count;
	unsigned long	address;

	count = 0;
	address = (unsigned long)ptr;
	if (!ptr)
		return (ft_print_str("(nil)"));
	count += ft_print_str("0x");
	count += ft_print_hex_ptr(address);
	return (count);
}
