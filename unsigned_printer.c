/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_printer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brouane <brouane@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 22:26:15 by brouane           #+#    #+#             */
/*   Updated: 2025/11/17 20:23:38 by brouane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unsigned_printer(unsigned int number)
{
	int	counter;

	counter = 0;
	if (number > 9)
		counter += unsigned_printer(number / 10);
	counter += char_printer((number % 10) + '0');
	return (counter);
}
