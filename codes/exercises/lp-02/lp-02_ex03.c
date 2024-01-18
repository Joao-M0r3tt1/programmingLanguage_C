/*
en-US: EXERCISE_03.C - Exercise 03. Operator truth table !
- Statement: Create a program to display the truth table of the not operator
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_03.C - Exercicio 03. Tabela-verdade do operador !
- Enunciado: Crie um programa para exibir a tabela-verdade do operador not
*/

#include <stdio.h>

int main(void) {
    printf("!0 == %d\n", !0);   // 1
    printf("!1 == %d\n", !1);   // 0

    return 0;
}