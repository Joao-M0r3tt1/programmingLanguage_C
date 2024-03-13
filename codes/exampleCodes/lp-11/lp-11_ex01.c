/*
en-US: EXAMPLE_01.C - Example 01. Memory allocation
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_01.C - Exemplo 01. Alocação de memória
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-11.pdf
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *p;
    p = malloc(sizeof(int));
    *p = 5;

    printf("%d\n", *p);

    return 0;
}