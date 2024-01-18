/*
en-US: EXAMPLE_04.C - Example 04. Square of a number - 1st version 
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_04.C - Exemplo 04. Quadrado de um número - 1º versão
*/

#include <stdio.h>
#define square(n) n * n

int main(void) {
    printf("%d\n", square(2 + 3));    // 11 (wrong)
    // right would be to put parentheses -> (2+3): printf("%d\n", square( (2 + 3) ));    // 25 (correct)

    return 0;
}