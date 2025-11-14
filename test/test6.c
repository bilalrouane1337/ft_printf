#include <stdio.h>

int main()
{
    printf("%ha\n", 3.14);   // 'h' is invalid for %a → behaves like "%a"
printf("%hs\n", "hi");   // 'h' invalid for %s → behaves like "%s"
printf("%hc\n", 'A');    // 'h' invalid for %c → behaves like "%c"
printf("%h%%\n");        // 'h' before % is ignored → prints '%'
printf("%\n");        // 'h' before % is ignored → prints '%'

}