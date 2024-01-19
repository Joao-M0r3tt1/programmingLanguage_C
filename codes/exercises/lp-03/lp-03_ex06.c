/*
en-US: EXERCISE_06.C - Exercise 06. Termial
- Statement: the termial of a natural number n is equal to the sum of the first n positive natural numbers (by definition, the terminal of 0 is 0). Given a natural number n, calculate and display its termial
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_06.C - Exercicio 06. Termial
- Enunciado: o termial de um número natural n é igual à soma dos n primeiros naturais positivos (por definição, o terminal de 0 é 0). Dado um número natural n, calcule e exiba o seu termial
*/

#include <stdio.h>

int main(void) {
    int n, i, termial = 0;

    printf("Number? ");
    scanf("%d", &n);

    for(i = n; i != 0; i--)
        if(n == 0)
            printf("Termial of %d: 0", n);
        else 
            termial += i;
    printf("Termial of %d: %d", n, termial);

    return 0;
}