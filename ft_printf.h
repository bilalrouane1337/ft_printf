/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brouane <brouane@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:36:32 by brouane           #+#    #+#             */
/*   Updated: 2025/11/17 20:14:12 by brouane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		address_printer(void *ptr);
int		char_printer(char c);
int		format_checker(char c, va_list specifier);
int		ft_printf(const char *string, ...);
int		long_hexa_printer(unsigned long number);
int		lower_hexa_printer(unsigned int number);
int		number_printer(int number);
int		string_printer(char *str);
int		unsigned_printer(unsigned int number);
int		upper_hexa_printer(unsigned int number);

#endif
