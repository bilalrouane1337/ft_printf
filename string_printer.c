/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brouane <brouane@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 22:41:00 by brouane           #+#    #+#             */
/*   Updated: 2025/11/14 18:15:59 by brouane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int string_printer(char *str)
{
    int i;

    i = 0;
    if (!str)
		str = "(null)";
    while (str[i])
    {
        i += char_printer(str[i]);
    }
    return (i);
}
