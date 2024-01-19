/*
en-US: EXAMPLE_01.C - Example 01. Isolated use of increment/decrement - 1st version
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_01.C - Exemplo 01. Uso isolado de incremento/decremento - 1º versão
*/

#include <stdio.h>

int main(void) {
    int x = 5, y = 5;

    ++x;
    y--;
    printf("x = %d\ny = %d\n", x, y);  // x = 6    y = 4

    return 0;
}