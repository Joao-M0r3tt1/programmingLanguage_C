/*
en-US: EXAMPLE_06.C - Example 06. Parameter passing
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_06.C - Exemplo 06. Passagem de parâmetros
*/

#include <stdio.h>

void parameters(int y, int w[]) {
    y = w[0] = 50;
}

int main(void) {
    int x = 10, vector[3] = {20, 30, 40};

    parameters(x, vector);
    printf("x == %d\n", x);
    printf("v[0] == %d\n", vector[0]);

    return 0;
}