/*
en-US: EXAMPLE_08.C - Example 08. Direct and indirect call 
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_08.C - Exemplo 08. Chamada direta e indireta
*/


#include <stdio.h>

void h(void) {
    puts("H");
}

void g(void) {
    puts("G");
}

void f(void) {
    puts("F1");
    g();
    puts("F2");
}

int main(void) {
    puts("M1");
    f();
    puts("M2");

    return 0;
}

