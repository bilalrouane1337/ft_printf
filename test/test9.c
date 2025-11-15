#include <stdio.h>

int main(){

    printf("a: %a", 1.1);
    printf("\n");
    printf("a: % a\n", 1.1);
    printf("\n");
    printf("a: %+a\n", 1.1);
    printf("\n");
    printf("a: %#a\n", 1.1);
    printf("----------------------------\n");

    printf("b: %b", 2);
    printf("\n");
    printf("b: %b\n", 2);
    printf("----------------------------\n");

    printf("c: %c", 'c');
    printf("\n");
    printf("c: %c\n", 'c');
    printf("----------------------------\n");

    printf("d: %d", 4);
    printf("\n");
    printf("d: %d\n", 4);
    printf("----------------------------\n");

    printf("e: %e", 5.5);
    printf("\n");
    printf("e: %e\n", 5.5);
    printf("----------------------------\n");

    printf("f: %f", 6.6);
    printf("\n");
    printf("f: %f\n", 6.6);
    printf("----------------------------\n");

    printf("g: %g", 7.7777);
    printf("\n");
    printf("g: %g\n", 7.7777);
    printf("----------------------------\n");

    printf("h: %h", 8);
    printf("\n");
    printf("h: %h\n", 8);
    printf("----------------------------\n");

    printf("i: %i", 9);
    printf("\n");
    printf("i: %i\n", 9);
    printf("----------------------------\n");

    printf("j: %j", 10);
    printf("\n");
    printf("j: %j\n", 10);
    printf("----------------------------\n");

    printf("k: %k", 11);
    printf("\n");
    printf("k: %k\n", 11);
    printf("----------------------------\n");

    printf("l: %l", 12L);
    printf("\n");
    printf("l: %l\n", 12L);
    printf("----------------------------\n");

    printf("m: %m", 13);
    printf("\n");
    printf("m: %m\n", 13);
    printf("----------------------------\n");

    printf("n: %n", &((int){0}));
    printf("\n");
    printf("n: %n\n", &((int){0}));
    printf("----------------------------\n");

    printf("o: %o", 14);
    printf("\n");
    printf("o: %o\n", 14);
    printf("----------------------------\n");

    printf("p: %p", (void*)0x1234);
    printf("\n");
    printf("p: %p\n", (void*)0x1234);
    printf("----------------------------\n");

    printf("q: %q", 15);
    printf("\n");
    printf("q: %q\n", 15);
    printf("----------------------------\n");

    printf("r: %r", 16);
    printf("\n");
    printf("r: %r\n", 16);
    printf("----------------------------\n");

    printf("s: %s", "hello");
    printf("\n");
    printf("s: %s\n", "hello");
    printf("----------------------------\n");

    printf("t: %t", 17);
    printf("\n");
    printf("t: %t\n", 17);
    printf("----------------------------\n");

    printf("u: %u", 18);
    printf("\n");
    printf("u: %u\n", 18);
    printf("----------------------------\n");

    printf("v: %v", 19);
    printf("\n");
    printf("v: %v\n", 19);
    printf("----------------------------\n");

    printf("w: %w", 20);
    printf("\n");
    printf("w: %w\n", 20);
    printf("----------------------------\n");

    printf("x: %x", 21);
    printf("\n");
    printf("x: %x\n", 21);
    printf("----------------------------\n");

    printf("y: %y", 22);
    printf("\n");
    printf("y: %y\n", 22);
    printf("----------------------------\n");

    printf("z: %z", 23);
    printf("\n");
    printf("z: %z\n", 23);
    printf("----------------------------\n");

}