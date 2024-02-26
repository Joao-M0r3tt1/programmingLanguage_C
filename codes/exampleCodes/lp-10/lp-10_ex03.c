/*
en-US: EXAMPLE_03.C - Example 03. Parameter passing by reference
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_03.C - Exemplo 03. Passagem de parâmetro por referência
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-10.pdf
*/

#include <stdio.h>

void replacement(int *p, int *q) {
    int x = *p;
    *p = *q;
    *q = x;
}

int main(void) {
    int a = 5, b = 3;

    replacement(&a, &b);    // produces the expected effect
    printf("a = %d\nb = %d\n", a, b);

    return 0;
}