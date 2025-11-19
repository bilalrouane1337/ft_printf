/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lower_hexa_printer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brouane <brouane@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 20:53:34 by brouane           #+#    #+#             */
/*   Updated: 2025/11/17 20:14:43 by brouane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "ft_printf.h"

int	lower_hexa_printer(unsigned int number)
{
	char	*hexa_base;
	int		counter;

	hexa_base = "0123456789abcdef";
	counter = 0;
	if (number > 15)
		counter += lower_hexa_printer(number / 16);
	counter += char_printer(hexa_base[number % 16]);
	return (counter);
}
