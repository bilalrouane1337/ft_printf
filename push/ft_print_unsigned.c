/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarbouh <bmarbouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:31:47 by bmarbouh          #+#    #+#             */
/*   Updated: 2025/11/12 14:08:23 by bmarbouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nb)
{
	int		count;
	char	c;

	count = 0;
	if (nb > 9)
		count += ft_print_unsigned(nb / 10);
	c = (nb % 10) + '0';
	count += ft_print_char(c);
	return (count);
}
