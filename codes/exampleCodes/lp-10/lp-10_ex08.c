/*
en-US: EXAMPLE_08.C - Example 08. Pointer arithmetic
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_08.C - Exemplo 08. Aritmética de ponteiro
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-10.pdf
*/

#include <stdio.h>

int main(void) {
    int v[5] = {27, 55, 18, 34, 47};
    int *p = v, *q = v + 3;

    printf("v   : %p\n", v);
    printf("p   : %p\n\n", p);
    
    printf("v[3]: %p\n", &v[3]);
    printf("q   : %p\n\n", q);
    
    printf("v[1]: %p\n", &v[1]);
    printf("p+1 : %p\n\n", p + 1);
    
    printf("v[2]: %p\n", &v[2]);
    printf("q-1 : %p\n\n", q - 1);
    
    printf("q-p : %ld\n", q - p + 1);

    return 0;
}