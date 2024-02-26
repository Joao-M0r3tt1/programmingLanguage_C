/*
en-US: EXAMPLE_02.C - Example 02. Passing a parameter by value
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_02.C - Exemplo 02. Passagem de parâmetro por valor
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-10.pdf
*/

#include <stdio.h>

void replacement(int p, int q) {
    int x = p;
    p = q;
    q = x;
}

int main(void) {
    int a = 5, b = 3;

    replacement(a, b);  // does not produce the desired effect
    printf("a = %d\nb = %d", a, b);

    return 0;
}