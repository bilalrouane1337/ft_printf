#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Declare your ft_printf function
int ft_printf(const char *format, ...);

int main(void)
{
    int counter;

    // Test %c
    counter = ft_printf("Test %%c: [%c]\n", 'A');

    // Test %s
    counter = ft_printf("Test %%s: [%s]\n", "Hello, World!");

    // Test %d / %i
    counter = ft_printf("Test %%d: [%d]\n", 123);
    counter = ft_printf("Test %%i: [%i]\n", -456);

    // Test %u
    counter = ft_printf("Test %%u: [%u]\n", 4294967295U);

    // Test %p
    int x = 42;
    counter = ft_printf("Test %%p: [%p]\n", &x);

    // Test %x / %X
    counter = ft_printf("Test %%x: [%x]\n", 255);
    counter = ft_printf("Test %%X: [%X]\n", 255);

    // Test %%
    counter = ft_printf("Test %%%%: [%%]\n");

    // Test unknown specifiers (should print literally)
    counter = ft_printf("Test unknown: [%a] [%b] [%z]\n");

    // Test multiple in one string
    counter = ft_printf("Multiple: %c %s %d %i %u %p %x %X %% [%q]\n",
                        'B', "Test", 789, -321, 123456, &x, 0xAB, 0xCD);

    return 0;
}
