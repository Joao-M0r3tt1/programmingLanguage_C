/* OPERADORCONDICIONAL.C - Uso do operador condicional */

/* Enunciado: Dados dois números inteiros distintos, informe qual dele é o maior */

#include <stdio.h>

int main(void) {
    int a, b;

    printf("Numeros? ");
    scanf("%d %d", &a, &b);
    printf("Maior = %d\n", (a > b ? a : b));

    return 0;
}