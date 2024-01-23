/*
en-US: EXERCISE_01.C - Exercise 01. Factorial calculation
- Statement: create and run the program
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_01.C - Exercicio 01. Cálculo de fatorial
- Enunciado: crie e execute o programa 
*/

#include <stdio.h>

int factorial(int n) {
    if(n == 0) return 1;                // base
    else return n * factorial(n - 1);   // step
}

int main(void) {
    int n;

    printf("Number? ");
    scanf("%d", &n);

    printf("Factorial of %d: %d", n, factorial(n));

    return 0;
}