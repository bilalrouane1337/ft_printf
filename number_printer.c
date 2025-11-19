/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brouane <brouane@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 22:47:09 by brouane           #+#    #+#             */
/*   Updated: 2025/11/17 20:15:01 by brouane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	number_printer(int number)
{
	long	num;
	int		counter;

	num = number;
	counter = 0;
	if (num < 0)
	{
		counter += char_printer('-');
		num *= -1;
	}
	if (num > 9)
		counter += number_printer(num / 10);
	counter += char_printer((num % 10) + '0');
	return (counter);
}
