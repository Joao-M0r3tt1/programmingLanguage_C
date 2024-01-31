/*
en-US: EXAMPLE_04.C - Example 04. (Improper) vector indexing 
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_04.C - Exemplo 04. Indexação (inadequada) de vetor
*/

#include <stdio.h>

int main(void) {
    int v[3] = {10, 20, 30};
    int w[2] = {40, 50};

    v[3] = 60;
    w[-1] = 70;

    for(int i = 0; i < 3; i++)
        printf("%p: %d\n", &v[i], v[i]);
    for(int i = 0; i < 2; i++)
        printf("%p: %d\n", &w[i], w[i]);

    return 0;
}