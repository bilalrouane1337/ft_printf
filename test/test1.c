#include <stdarg.h>
#include <stdio.h>

int add(int count, ...)
{
    va_list spicifier;
    va_start(spicifier, count);

    int i = 0;
    int s = 0;
    int t = 0;
    while (i < count)
    {
         // Lowercase letters
    printf("a: l%al\n"); printf("\n");
    printf("b: l%bl\n"); printf("\n");
    printf("c: l%cl\n"); printf("\n");
    printf("d: l%dl\n"); printf("\n");
    printf("e: l%el\n"); printf("\n");
    printf("f: l%fl\n"); printf("\n");
    printf("g: l%gl\n"); printf("\n");
    printf("h: l%hl\n"); printf("\n");
    printf("i: l%il\n"); printf("\n");
    printf("j: l%jl\n"); printf("\n");
    printf("k: l%kl\n"); printf("\n");
    printf("l: l%ll\n"); printf("\n");
    printf("m: l%ml\n"); printf("\n");
    printf("n: l%nl\n"); printf("\n");
    printf("o: l%ol\n"); printf("\n");
    printf("p: l%pl\n"); printf("\n");
    printf("q: l%ql\n"); printf("\n");
    printf("r: l%rl\n"); printf("\n");
    printf("s: l%sl\n"); printf("\n");
    printf("t: l%tl\n"); printf("\n");
    printf("u: l%ul\n"); printf("\n");
    printf("v: l%vl\n"); printf("\n");
    printf("w: l%wl\n"); printf("\n");
    printf("x: l%xl\n"); printf("\n");
    printf("y: l%yl\n"); printf("\n");
    printf("z: l%zl\n"); printf("\n");

    // Uppercase letters
    printf("A: l%Al\n"); printf("\n");
    printf("B: l%Bl\n"); printf("\n");
    printf("C: l%Cl\n"); printf("\n");
    printf("D: l%Dl\n"); printf("\n");
    printf("E: l%El\n"); printf("\n");
    printf("F: l%Fl\n"); printf("\n");
    printf("G: l%Gl\n"); printf("\n");
    printf("H: l%Hl\n"); printf("\n");
    printf("I: l%Il\n"); printf("\n");
    printf("J: l%Jl\n"); printf("\n");
    printf("K: l%Kl\n"); printf("\n");
    printf("L: l%Ll\n"); printf("\n");
    printf("M: l%Ml\n"); printf("\n");
    printf("N: l%Nl\n"); printf("\n");
    printf("O: l%Ol\n"); printf("\n");
    printf("P: l%Pl\n"); printf("\n");
    printf("Q: l%Ql\n"); printf("\n");
    printf("R: l%Rl\n"); printf("\n");
    printf("S: l%Sl\n"); printf("\n");
    printf("T: l%Tl\n"); printf("\n");
    printf("U: l%Ul\n"); printf("\n");
    printf("V: l%Vl\n"); printf("\n");
    printf("W: l%Wl\n"); printf("\n");
    printf("X: l%Xl\n"); printf("\n");
    printf("Y: l%Yl\n"); printf("\n");
    printf("Z: l%Zl\n"); printf("\n");
        s += va_arg(spicifier, int);
        i++;
    }
    va_end(spicifier);
    return (s);  
}

int main()
{
    printf("%u\n", -1);
}