/*
en-US: EXERCISE_03.C - Exercise 03. Perfect squares
- Statement: the square of a natural number n is equal to the sum of the first n consecutive odd numbers. Based on this idea, create a program that, given a natural number n, calculates and displays the square of n

Ex: 5² = 1 + 3 + 5 + 7 + 9 = 25
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_03.C - Exercicio 03. Quadrados perfeitos
- Enunciado: o quadrado de um número natural n é igual à soma dos n primeiros ímpares consecutivos. Com base nessa ideia, crie um programa que dado um número natural n, calcula e exibe o quadrado de n 

Ex: 5² = 1 + 3 + 5 + 7 + 9 = 25
*/

#include <stdio.h>

int main(void) {
    int n, i, sum = 0;

    printf("Number? ");
    scanf("%d", &n);

    for(i = 0; i <= (2 * n); i++)
        if(i % 2 != 0) 
            sum += i; 
    printf("Square of %d is: %d\n", n, sum);

    return 0;
}