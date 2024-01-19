/*
en-US: EXERCISE_01.C - Exercise 01. Countdown
- Statement: given a natural number n, display a countdown from n to 0
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_01.C - Exercicio 01. Contagem regressiva
- Enunciado: dado um número natural n, exiba uma contagem regressiva de n até 0
*/

#include <stdio.h>

int main(void) {
    int n, i;

    printf("Number? ");
    scanf("%d", &n);

    for(i = n; i >= 0; i--)
        printf("%d\n", i);
    
    return 0;
}