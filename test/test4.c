#include <stdio.h>
#include <stdarg.h>

void print_numbers(float count, ...) // count tells how many numbers will follow
{
    va_list args;                // declare a list to hold the arguments
    va_start(args, count);       // initialize the list

    for (int i = 0; i < count; i++)
    {
        int num = va_arg(args, int);    // get the next argument (type: int)
        printf("%d ", num);
    }

    va_end(args);                // clean up
    printf("\n");
}

int main(void)
{
    print_numbers(1, 3, 10, 20, 30);    // prints: 10 20 30
    print_numbers(2, 5, 1, 2, 3, 4, 5); // prints: 1 2 3 4 5
}