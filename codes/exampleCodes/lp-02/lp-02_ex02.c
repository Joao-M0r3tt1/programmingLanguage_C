/*
en-US: EXAMPLE_02.C - Example 02. Relational operators
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_02.C - Exemplo 02. Operadores relacionais
*/

#include <stdio.h>

int main(void) {
    printf("%d\n", 1 == 2);                 // 0
    printf("%d\n", 1 != 2);                 // 1
    printf("%d\n", 1 < 2);                  // 1
    printf("%d\n", 1 > 2);                  // 0
    printf("%d\n", 9 - 2 <= 2 * 3 + 1);     // 1

    return 0;
}