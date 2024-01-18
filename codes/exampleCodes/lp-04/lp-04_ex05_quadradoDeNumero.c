/*
en-US: EXAMPLE_05.C - Example 05. Square of a number - 2nd version 
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_05.C - Exemplo 05. Quadrado de um número - 2º versão
*/

#include <stdio.h>
#define square(n) (n) * (n)

int main(void) {
    printf("%d\n", square(2 + 3));    // 25 (correct)

    return 0;
}