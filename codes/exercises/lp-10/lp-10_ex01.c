/*
en-US: EXERCISE_01.C - Exercise 01. Pointer to char
- Statement: What is the output of the following program:
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_01.C - Exercicio 01. Ponteiro para char
- Enunciado: Qual a saída do programa a seguir:
*/

#include <stdio.h>

int main(void) {
    char x = 'A';
    char *p = &x;

    *p = *p + 3;
    printf("%c\n", x);  // D

    return 0;
}