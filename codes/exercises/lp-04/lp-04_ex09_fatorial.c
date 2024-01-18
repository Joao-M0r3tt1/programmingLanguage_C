/*
en-US: EXERCISE_09.C - Exercise 09. Factorial
- Statement: the factorial of a natural number n is equal to the product of the first n positive natural numbers (by definition, the factorial of 0 is 1). Create a function to calculate the factorial of a natural number n.
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_09.C - Exercicio 09. Fatorial
- Enunciado: o fatorial de um número natural n é igual ao produto dos n primeiros naturais positivos (por definição, o fatorial de 0 é 1). Crie uma função para calcular o fatorial de um número natural n.
*/

#include <stdio.h>

int factorial(int); 

int main(void) {
    int n;

    printf("Number? ");
    scanf("%d", &n);

    printf("Factorial of %d: %d", n, factorial(n));

    return 0;
}

int factorial(int c) {
    int sum = 1;

    if(c == 0) return sum;
    else {
        for(int i = 1; i <= c; i++)
            sum *= i;
        return sum; 
    }
}