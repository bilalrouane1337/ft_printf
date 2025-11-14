#include <stdio.h>

int main()
{
    // Lowercase letters
    printf("a: %a ", 1.1);      // %a is actually hex float in C99
    printf("b: %b ", 2);        // invalid, but assign 2
    printf("c: %c ", 'c');      // char
    printf("d: %d ", 4);        // int
    printf("e: %e ", 1.1);      // scientific float
    printf("f: %f ", 6.6);      // float
    printf("g: %g ", 7.7);      // float
    printf("h: %h ", 8);       // invalid, assign 8
    printf("i: %i ", 9);        // int
    printf("j: %j ", 10);       // invalid, assign 10
    printf("k: %k ", 11);       // invalid, assign 11
    printf("l: %l ", 12L);      // long
    printf("m: %m ", 13);       // invalid, assign 13
    // printf("n: %n ", NULL);     // special: writes number of chars printed
    printf("o: %o ", 14);       // octal
    printf("p: %p ", (void*)0); // pointer
    printf("q: %q ", 15);       // invalid, assign 15
    printf("r: %r ", 16);       // invalid, assign 16
    printf("s: %s ", "hello");  // string
    printf("t: %t ", 17);       // invalid, assign 17
    printf("u: %u ", 18);       // unsigned
    printf("v: %v ", 19);       // invalid, assign 19
    printf("w: %w ", 20);       // invalid, assign 20
    printf("x: %x ", 255);      // hex lowercase
    printf("y: %y ", 21);       // invalid, assign 21
    printf("z: %z ", 22);       // invalid, assign 22

    printf("\n---------------------------------------------\n");

    printf(" a: %a", 1.1);      // %a is actually hex float in C99
    printf(" b: %b", 2);        // invalid, but assign 2
    printf(" c: %c", 'c');      // char
    printf(" d: %d", 4);        // int
    printf(" e: %e", 1.1);      // scientific float
    printf(" f: %f", 6.6);      // float
    printf(" g: %g", 7.7);      // float
    printf(" h: %h", 8);       // invalid, assign 8
    printf("     i: %i", 9);        // int
    printf(" j: %j", 10);       // invalid, assign 10
    printf(" k: %k", 11);       // invalid, assign 11
    printf(" l: %l", 12L);      // long
    printf(" m: %m", 13);       // invalid, assign 13
    // printf(" n: %n", NULL);     // special: writes number of chars printed
    printf(" o: %o", 14);       // octal
    printf(" p: %p", (void*)0); // pointer
    printf(" q: %q", 15);       // invalid, assign 15
    printf(" r: %r", 16);       // invalid, assign 16
    printf(" s: %s", "hello");  // string
    printf(" t: %t", 17);       // invalid, assign 17
    printf(" u: %u", 18);       // unsigned
    printf(" v: %v", 19);       // invalid, assign 19
    printf(" w: %w", 20);       // invalid, assign 20
    printf(" x: %x", 255);      // hex lowercase
    printf(" y: %y", 21);       // invalid, assign 21
    printf(" z: %z", 22);       // invalid, assign 22

    // Uppercase letters
    // printf("A: %A\n", 2.2);      // %A is hex float (uppercase)
    // printf("B: %B\n", 23);       // invalid, assign 23
    // printf("C: %C\n", 'C');      // char
    // printf("D: %D\n", 24);       // invalid, assign 24
    // printf("E: %E\n", 3.3);      // scientific float
    // printf("F: %F\n", 4.4);      // float
    // printf("G: %G\n", 5.5);      // float
    // printf("H: %H\n", 25);       // invalid, assign 25
    // printf("I: %I\n", 26);       // invalid, assign 26
    // printf("J: %J\n", 27);       // invalid, assign 27
    // printf("K: %K\n", 28);       // invalid, assign 28
    // printf("L: %L\n", 29L);      // long
    // printf("M: %M\n", 30);       // invalid, assign 30
    // printf("N: %N\n", NULL);     // special: writes chars printed
    // printf("O: %O\n", 31);       // octal
    // printf("P: %P\n", (void*)0); // pointer
    // printf("Q: %Q\n", 32);       // invalid, assign 32
    // printf("R: %R\n", 33);       // invalid, assign 33
    // printf("S: %S\n", "WORLD");  // string
    // printf("T: %T\n", 34);       // invalid, assign 34
    // printf("U: %U\n", 35);       // unsigned
    // printf("V: %V\n", 36);       // invalid, assign 36
    // printf("W: %W\n", 37);       // invalid, assign 37
    // printf("X: %X\n", 0xAB);     // hex uppercase
    // printf("Y: %Y\n", 38);       // invalid, assign 38
    // printf("Z: %Z\n", 39);       // invalid, assign 39

    return 0;
}
