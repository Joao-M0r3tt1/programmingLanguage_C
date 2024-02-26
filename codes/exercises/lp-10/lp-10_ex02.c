/*
en-US: EXERCISE_02.C - Exercise 02. Pointer to float
- Statement: What is the output of the following program:
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_02.C - Exercicio 02. Ponteiro para float
- Enunciado: Qual a saída do programa a seguir:
*/

#include <stdio.h>

int main(void) {
    float x = 2.0, y = 3.5;
    float *p = &x, *q = &y;

    printf("%.1f\n", *p * *q);    // 7.0

    return 0;
}