/*
en-US: EXAMPLE_02.C - Example 02. Isolated use of increment/decrement - 2nd version
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_02.C - Exemplo 02. Uso isolado de incremento/decremento - 2º versão
*/

#include <stdio.h>

int main(void) {
    int x = 5, y = 5;

    x++;
    --y;
    printf("x = %d\ny = %d\n", x, y);  // x = 6    y = 4

    return 0;
}