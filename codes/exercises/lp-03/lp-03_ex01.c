/* CONTAGEMREGRESSIVA.C - Exercicio 1. Contagem regressiva */

/* Enunciado: dado um número natural n, exiba uma contagem regressiva de n até 0 */

#include <stdio.h>

int main(void) {
    int n, i;

    printf("Numero? ");
    scanf("%d", &n);

    for(i = n; i >= 0; i--)
        printf("%d\n", i);
    
    return 0;
}