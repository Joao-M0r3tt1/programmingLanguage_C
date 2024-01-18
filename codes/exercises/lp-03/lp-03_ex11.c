/* MAXIMOMINIMOSEQUENCIA.C - Exercicio 11. Máximo e mínimo de uma sequência */

/* Enunciado: dada uma sequência de números naturais (cujo últim número é 0), informe quais são os itens máximo e mínimo nessa sequência */

#include <stdio.h>

int main(void) {
    int n, max = 0, min = 0;

    printf("Numero? ");
    scanf("%d", &n);
    max = n; min = n;

    while(n != 0) {
        if(n > max) max = n;
        else if (n < min) min = n;

        printf("Numero? ");
        scanf("%d", &n);
    }
    printf("Maximo: %d e Minimo: %d\n", max, min);
    
    return 0;
}