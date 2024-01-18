/*
en-US: EXERCISE_03.C - Exercise 03. Conversion
- Statement: Given the integer in base 10, display the corresponding value in base 16
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_03.C - Exercicio 03. Conversão
- Enunciado: Dado o número inteiro na base 10, exibir o valor correspondente em base 16
*/

#include <stdio.h>

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Conversion to base 16 = %X\n", number);

    return 0;
}