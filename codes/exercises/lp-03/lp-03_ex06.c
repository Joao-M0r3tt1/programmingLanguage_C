/* TERMIAL.C - Exercicio 6. Termial */

/* Enunciado: o termial de um número natural n é igual à soma dos n primeiros naturais positivos (por definição, o terminal de 0 é 0). Dado um número natural n, calcule e exiba o seu termial */

#include <stdio.h>

int main(void) {
    int n, i, termial = 0;

    printf("Numero? ");
    scanf("%d", &n);

    for(i = n; i != 0; i--)
        if(n == 0)
            printf("Termial de %d: 0", n);
        else 
            termial += i;
    printf("Termial de %d: %d", n, termial);

    return 0;
}