/*
en-US: EXAMPLE_05.C - Example 05. Vector name
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_05.C - Exemplo 05. Nome de vetor
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-10.pdf
*/

#include <stdio.h>

int main(void) {
    int v[3] = {55, 79, 46};

    printf("Vector address: %p\n", v);
    printf("Value in address: %d\n", *v);

    return 0;
}