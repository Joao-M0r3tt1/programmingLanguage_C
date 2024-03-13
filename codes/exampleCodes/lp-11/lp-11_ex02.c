/*
en-US: EXAMPLE_02.C - Example 02. Memory deallocation
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_02.C - Exemplo 02. Desalocação de memória
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-11.pdf
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *p = malloc(sizeof(int));
    *p = 5;

    printf("%d\n", *p);
    free(p);
    p = NULL;
    
    return 0;
}