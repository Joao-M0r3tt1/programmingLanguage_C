/*
en-US: EXERCISE_11.C - Exercise 11. Maximum and minimum of a sequence
- Statement: given a sequence of natural numbers (whose last number is 0), state what the maximum and minimum items in this sequence are
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_11.C - Exercicio 11. Máximo e mínimo de uma sequência
- Enunciado: dada uma sequência de números naturais (cujo último número é 0), informe quais são os itens máximo e mínimo nessa sequência
*/

#include <stdio.h>

int main(void) {
    int n, max = 0, min = 0;

    printf("Number? ");
    scanf("%d", &n);
    max = n; min = n;

    while(n != 0) {
        if(n > max) max = n;
        else if (n < min) min = n;

        printf("Number? ");
        scanf("%d", &n);
    }
    printf("Maximum: %d and Minimum: %d\n", max, min);
    
    return 0;
}