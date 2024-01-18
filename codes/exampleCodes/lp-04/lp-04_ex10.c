/*
en-US: EXAMPLE_10.C - Example 10. Call previously declared functions
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_10.C - Exemplo 10. Chamada as funções previamente declaradas
*/

#include <stdio.h>

void f(void);   // declaration of f()
void g(void);   // declaration of g()

int main(void) {
    puts("M1");
    f();
    puts("M2");

    return 0;
}

void f(void) { puts("F1"); g(); puts("F2"); }

void g(void) { puts("G"); }