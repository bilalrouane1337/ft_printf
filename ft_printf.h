/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brouane <brouane@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:36:32 by brouane           #+#    #+#             */
/*   Updated: 2025/11/14 17:54:43 by brouane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int ft_printf(const char *string, ...);
int format_checker(char c, va_list specifier);
int	address_printer(void *ptr);
int     char_printer(char c);
int number_printer(int number);
int string_printer(char *str);
int	lower_hexa_printer(unsigned long number);
int	upper_hexa_printer(unsigned int number);
int	unsigned_printer(unsigned int number);

#endif