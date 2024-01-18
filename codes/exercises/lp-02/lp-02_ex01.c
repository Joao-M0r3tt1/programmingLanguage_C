/*
en-US: EXERCISE_01.C - Exercise 01. Truth table of the && operator
- Statement: Run the program and analyze the result
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_01.C - Exercicio 01. Tabela-verdade do operador &&
- Enunciado: Execute o programa e analise o resultado
*/

#include <stdio.h>

int main(void) {
    printf("0 && 0 == %d\n", 0 && 0);   // 0
    printf("0 && 1 == %d\n", 0 && 1);   // 0
    printf("1 && 0 == %d\n", 1 && 0);   // 0
    printf("1 && 1 == %d\n", 1 && 1);   // 1

    return 0;
} 