/*
en-US: EXAMPLE_09.C - Example 09. Call previously defined functions
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_09.C - Exemplo 09. Chamada as funções previamente definidas
*/

#include <stdio.h>

void g(void) { puts("G"); }

void f(void) { puts("F1"); g(); puts("F2"); }

int main(void) {
    puts("M1");
    f();
    puts("M2");

    return 0;
}