/*
en-US: EXERCISE_01.C - Exercise 01. Binary
- Statement: create the function binary(n), which displays a natural number n in binary
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_01.C - Exercicio 01. Binário
- Enunciado: crie a função binario(n), que exibe um número natural n em binário
*/

#include <stdio.h>

void binary(int n) {
    int index = 0, vector[32];

    while(n >= 1) {
        vector[index++] = n % 2;
        n /= 2;
    }

    puts("\nBinary representation:");
    for(int i = (index - 1); i >= 0; i--) 
        printf("%d", vector[i]);
}

int main(void) {
    int number;

    printf("Number? ");
    scanf("%d", &number);

    binary(number);

    return 0;
}