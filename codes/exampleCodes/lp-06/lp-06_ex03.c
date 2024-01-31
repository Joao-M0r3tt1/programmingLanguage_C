/*
en-US: EXAMPLE_03.C - Example 03. Vector initiation 
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_03.C - Exemplo 03. Iniciação de vetor
*/

#include <stdio.h>

int main(void) {
    // the number of initial values must be compatible with the size of the vector
    int a[3] = {19, 54, 63};

    // If the number of initial values is greater than the size of the vector, an error occurs
    int b[3] = {19, 54, 63, 79};

    // If the number of initial values is smaller than the size of the vector, the first positions start with the indicated values and the remaining positions are automatically reset to zero
    int c[5] = {19, 54, 67};

    // if a vector without explicit size is started, its size is fixed automatically
    int d[] = {19, 54, 67};

    return 0;
}