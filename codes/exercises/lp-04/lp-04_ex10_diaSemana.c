/*
en-US: EXERCISE_10.C - Exercise 10. Day of the week
- Statement: create the function dw(n), which displays in full the day of the week corresponding to the natural n. If n is not a number between 1 and 7, the function must abort program execution
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_10.C - Exercicio 10. Dia da semana
- Enunciado: crie a função dds(n), que exibe por extenso o dia da semana correspondente ao natural n. Se n não for um número entre 1 e 7, a função deve abortar a execução do programa
_____________________________________________________________________________________________________________________

obs: dw = day of the week | dds = dia da semana
*/

#include <stdio.h>
#include <stdlib.h>

void dw(int n) {
    switch (n) {
    case 1:
        printf("Sunday!\n");
        break;
    case 2:
        printf("Monday!\n");
        break;
    case 3:
        printf("Tuesday!\n");
        break;
    case 4:
        printf("Wednesday!\n");
        break;
    case 5:
        printf("Thursday!\n");
        break;
    case 6:
        printf("Friday!\n");
        break;
    case 7:
        printf("Saturday!\n");
        break;
    default:
        printf("Invalid!\n");
        abort();
    }
}

int main(void) {
    int n;

    printf("Day? ");
    scanf("%d", &n);
    dw(n);

    return 0;
}