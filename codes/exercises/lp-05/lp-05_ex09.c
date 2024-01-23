/*
en-US: EXERCISE_09.C - Exercise 09. Pair
- Statement: create a recursive function that determines whether a natural n is even, using only subtractions
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_09.C - Exercicio 09. Par
- Enunciado: crie uma função recursiva que determina se um natural n é par, usando apenas subtrações
*/

#include <stdio.h>

void is_pair(int n) {
    if(n == 0) printf("Pair");
    else if(n == 1) printf("Odd");
    else {
        is_pair(n - 2);
    }
}

int main(void) {
    int n;

    printf("Number? ");
    scanf("%d", &n);

    is_pair(n);
    
    return 0;
}