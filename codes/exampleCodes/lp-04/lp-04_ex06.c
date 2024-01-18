/*
en-US: EXAMPLE_06.C - Example 06. Square of a number - 2nd version 
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_06.C - Exemplo 06. Quadrado de um número - 2º versão
*/

#include <stdio.h>
#define square(n) (n) * (n)

int main(void) {
    printf("%d\n", 100 / (square(2 + 3)));    // 100 (wrong)
    // right would be to put parentheses -> (square(...)): printf("%d\n", 100 / (square(2 + 3)));    // 4 (correct)

    return 0;
}