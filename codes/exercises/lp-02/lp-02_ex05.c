/*
en-US: EXERCISE_05.C - Exercise 05. Greater between two numbers
- Statement: Given two distinct numbers, state which one is the largest
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_05.C - Exercicio 05. Maior entre dois números
- Enunciado: Dados dois números distintos, informe qual deles é o maior
*/

#include <stdio.h>

int main(void) {
    int n1, n2;

    printf("Numbers? ");
    scanf("%d %d", &n1, &n2);
    if(n1 > n2) printf("%d is the biggest number", n1);
    else printf("%d is the biggest number", n2);

    return 0;
}