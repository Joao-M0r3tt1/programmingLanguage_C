/*
en-US: EXAMPLE_04.C - Example 04. Use of increment/decrement in expression - 2nd version
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_04.C - Exemplo 04. Uso de incremento/decremento em expressão - 2º versão
*/

#include <stdio.h>

int main(void) {
    int x = 5, y, z;

    y = x++ + 2;
    z = --x + 2;
    printf("x = %d\ny = %d\nz = %d\n", x, y, z);  // x = 5    y = 7     z = 7

    return 0;
}