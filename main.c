/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brouane <brouane@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 21:27:51 by brouane           #+#    #+#             */
/*   Updated: 2025/11/14 22:25:39 by brouane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
    char name[] = "world";
    int x = printf("hello: %h", 5);
    printf("%d\n", x);

    
    int y = printf("hello: %h ", 5);
    printf("%d", y);

    
    // int x = printf(""); int x = ft_printf(""); ✅ 0
    // int x = printf("hello"); int x = ft_printf("hello"); ✅ 5
    
    // int x = printf("", 8); int x = ft_printf("", 8); ✅ 0
    // int x = printf("hello", 8); int x = ft_printf("hello", 8); ✅ 5
    
    // char name[] = "world";
    // int x = printf("hello %s", name); int x = ft_printf("hello %s", name); ✅ 11

    // int x = printf("hello % s", name); int x = ft_printf("hello % s", name); ❌ (hello s ; hello world)
    
    // int x = printf(NULL); int x = ft_printf(NULL); ✅ -1
    // int x = printf(); int x = ft_printf(); ✅ too few arguments
    // int x = printf(a); int x = ft_printf(a); ✅ undeclared a
    // int x = printf(5); int x = ft_printf(5); ✅ wrong data type
}