/*
en-US: EXERCISE_02.C - Exercise 02. Bytes
- Statement: Create a program to inform how many Bytes are needed to represent the results of expressions 7/2 and 7/2.0, respectively
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_02.C - Exercicio 02. Bytes
- Enunciado: Crie um programa para informar quantos Bytes são necessários para representar os resultados das expressões 7/2 e 7/2.0, respectivamente
*/

#include <stdio.h> 

int main(void) {

    printf("%d Bytes are needed to represent the expressio 7/2\n", sizeof(7/2));
    printf("%d Bytes are needed to represent the expressio 7/2.0\n", sizeof(7/2.0));

    return 0;
}