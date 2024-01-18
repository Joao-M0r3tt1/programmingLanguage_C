/*
en-US: EXERCISE_07.C - Exercise 07. Perfect squares
- Statement: The square of a natural number n is equal to the sum of the first n consecutive odd numbers. Based on this idea, create a function that returns the square of a natural number n, given as input

For example: 5² = 1 + 3 + 5 + 7 + 9 = 25
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_07.C - Exercicio 07. Quadrados perfeitos
- Enunciado: O quadrado de um número natural n é igual à soma dos n primeiros ímpares consecutivos. Com base nessa ideia, crie uma função que devolve o quadrado de um número natural n, dado como entrada 

Por exemplo: 5² = 1 + 3 + 5 + 7 + 9 = 25
*/

#include <stdio.h>

int perfect_square(int n) {
    int x = 1;

    for(int i = 1; i < (n * 2); i++)
        if(i % 2 != 0) x += i;

    return x;
}

int main(void) {
    int n;

    printf("Number? ");
    scanf("%d", &n);

    printf("Square of %d is: %d", n, perfect_square(n));

    return 0;
}