/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarbouh <bmarbouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 15:12:38 by bmarbouh          #+#    #+#             */
/*   Updated: 2025/11/12 14:08:32 by bmarbouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int nb, char format)
{
	char	*base;
	int		count;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	count = 0;
	if (nb > 15)
		count += ft_print_hex(nb / 16, format);
	count += ft_print_char(base[nb % 16]);
	return (count);
}
