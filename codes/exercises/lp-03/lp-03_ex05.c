/*
en-US: EXERCISE_05.C - Exercise 05. Factorial
- Statement: the factorial of a natural number n is equal to the product of the first n positive natural numbers (by definition, the factorial of 0 is 1). given a natural number n, calculate and display its factorial
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_05.C - Exercicio 05. Fatorial
- Enunciado: o fatorial de um número natural n é igual ao produto dos n primeiros naturais positivos (por definição, o fatorial de 0 é 1). ado um número natural n, calcule e exiba o seu fatorial
*/

#include <stdio.h>

int main(void) {
    int n, i, factorial = 1;

    printf("Number? ");
    scanf("%d", &n);

    for(i = n; i != 0; i--)
        if(n == 0)
            printf("Factorial of %d: 1", n);
        else 
            factorial *= i;
    printf("Factorial of %d: %d", n, factorial);

    return 0;
}