/*
en-US: EXAMPLE_07.C - Example 07. Pointer indexing that points to vector
- Statement: In C, there is no difference between Indexing the Name of the vector or the Pointer that points to it
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_07.C - Exemplo 07. Indexação de ponteiro que aponta vetor
- Enunciado: Em C, não há diferença entre Indexar o Nome do vetor ou o Ponteiro que o aponta
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-10.pdf
*/

#include <stdio.h>

/* 
// Vector name indexing
void display(int v[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d\n", v[i]);
}
*/

// Pointer indexing that points to vector
void display(int *p, int n) {
    for(int i = 0; i < n; i++)
        printf("%d\n", p[i]);
}

int main(void) {
    int v[3] = {55, 79, 46};

    display(v, 3);

    return 0;
}