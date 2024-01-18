/*
en-US: EXERCISE_02.C - Exercise 02. Operator truth table ||
- Statement: Based on the program lp-02-ex01.c, create a program to display the truth table of the or operator
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_02.C - Exercicio 02. Tabela-verdade do operador ||
- Enunciado: Com base no programa lp-02-ex01.c crie um programa para exibir a tabela-verdade do operador or
*/

#include <stdio.h>

int main(void) {
    printf("0 || 0 == %d\n", 0 || 0);   // 0
    printf("0 || 1 == %d\n", 0 || 1);   // 1
    printf("1 || 0 == %d\n", 1 || 0);   // 1
    printf("1 || 1 == %d\n", 1 || 1);   // 1

    return 0;
}