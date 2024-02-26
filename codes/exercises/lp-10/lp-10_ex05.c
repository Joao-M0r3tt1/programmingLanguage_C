/*
en-US: EXERCISE_05.C - Exercise 05. Sum of a sequence of integers
- Statement: Using pointer notation, create the function sum(v, n), which returns the sum of the n real numbers stored in the vector v
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_05.C - Exercicio 05. Soma de uma sequência de inteiros
- Enunciado: Usando notação de ponteiro, crie a função soma(v, n), que devolve a soma dos n números reais armazenados no vetor v
*/

#include <stdio.h>

float sum(float *v, int n) {
    if(n == 0) return 0;
    return v[n - 1] + sum(v, (n - 1));
}

int main(void) {
    float v[3] = {2.5, 2.5, 3.0};

    printf("%.1f\n", sum(v, 3));

    return 0;
}