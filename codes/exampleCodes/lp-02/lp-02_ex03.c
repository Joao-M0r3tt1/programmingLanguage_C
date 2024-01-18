/*
en-US: EXAMPLE_03.C - Example 03. Logical Operators
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_03.C - Exemplo 03. Operadores Lógicos
*/

#include <stdio.h>

int main(void) {
    printf("%d\n", !0);                 // 1
    printf("%d\n", !9);                 // 0
    printf("%d\n", 1 && 0);             // 0
    printf("%d\n", 0 || 1);             // 1
    printf("%d\n", 2 < 3 || 3 < 2);     // 1

    return 0;
}