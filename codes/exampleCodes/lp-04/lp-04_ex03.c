/*
en-US: EXAMPLE_03.C - Example 03. Square of a number - 1st version 
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_03.C - Exemplo 03. Quadrado de um número - 1º versão
*/

#include <stdio.h>
#define square(n) n * n

int main(void) {
    printf("%d\n", square(2));    // 4 (correct)

    return 0;
}