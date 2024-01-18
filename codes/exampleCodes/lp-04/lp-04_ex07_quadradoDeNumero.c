/*
en-US: EXAMPLE_07.C - Example 07. Square of a number - 2nd version 
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_07.C - Exemplo 07. Quadrado de um número - 2º versão
*/

#include <stdio.h>
#define square(n) ((n) * (n))

int main(void) {
    printf("%d\n", 100 / square(2 + 3));    // 4 (correct)

    return 0;
}