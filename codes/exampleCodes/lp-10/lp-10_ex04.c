/*
en-US: EXAMPLE_04.C - Example 04. Variable address
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_04.C - Exemplo 04. Endereço de variável
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-10.pdf
*/

#include <stdio.h>

int main(void) {
    int v = 5;

    printf("V address: %p\n", &v);
    printf("Value of v: %d\n", *(&v));

    return 0;
}