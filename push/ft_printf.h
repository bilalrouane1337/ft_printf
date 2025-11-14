/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarbouh <bmarbouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:39:36 by bmarbouh          #+#    #+#             */
/*   Updated: 2025/11/12 14:07:59 by bmarbouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(char c);
int	ft_print_format(char sep, va_list *ap);
int	ft_print_str(char *str);
int	ft_print_decimal(int n);
int	ft_print_hex(unsigned int nb, char format);
int	ft_print_address(void *ptr);
int	ft_print_unsigned(unsigned int nb);

#endif