/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarbouh <bmarbouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:01:23 by bmarbouh          #+#    #+#             */
/*   Updated: 2025/11/12 14:08:40 by bmarbouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_decimal(int n)
{
	long	nb;
	int		count;
	char	c;

	count = 0;
	nb = n;
	if (nb < 0)
	{
		count += ft_print_char('-');
		nb = -nb;
	}
	if (nb > 9)
		count += ft_print_decimal(nb / 10);
	c = (nb % 10) + '0';
	count += ft_print_char(c);
	return (count);
}
