/*
en-US: EXAMPLE_05.C - Example 05. vector address 
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_05.C - Exemplo 05. Endereço de vetor
*/

#include <stdio.h>

int main(void) {
    int vector[5];

    printf("vector == %p\n", vector);
    printf("&vector == %p\n", &vector);
    printf("&vector[0] == %p\n", &vector[0]);

    return 0;
}