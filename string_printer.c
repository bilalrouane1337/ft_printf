/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brouane <brouane@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 22:41:00 by brouane           #+#    #+#             */
/*   Updated: 2025/11/17 20:19:28 by brouane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	string_printer(char *str)
{
	int	counter;

	counter = 0;
	if (!str)
		str = "(null)";
	while (str[counter])
	{
		counter += char_printer(str[counter]);
	}
	return (counter);
}
