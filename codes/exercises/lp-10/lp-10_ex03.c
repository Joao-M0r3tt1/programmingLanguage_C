/*
en-US: EXERCISE_03.C - Exercise 03. Pointer to float
- Statement: Create the function minmax(v, n, &min, &max), which stores in the min and max parameters, respectively, the minimum item and the maximum item of a vector v with n integers
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_03.C - Exercicio 03. Mínimo e máximo de uma sequência
- Enunciado: Crie a função minmax(v, n, &min, &max), que guarda nos parâmetros min e max, respectivamente, o item mínimo e o item máximo de um vetor v com n inteiros
*/

#include <stdio.h>

void minmax(int v[], int n, int *p, int *q) {
    *p = *q = v[n - n];
    for(int i = 1; i < n; i++) {
        *p = *p > v[i] ? v[i] : *p;
        *q = *q < v[i] ? v[i] : *q; 
    }
}

int main(void) {
    int v[5] = {26, 55, 89, 14, 77};
    int min, max;

    minmax(v, 5, &min, &max);
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    return 0;
}