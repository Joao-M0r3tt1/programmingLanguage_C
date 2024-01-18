/* FATORIAL.C - Exercicio 5. Fatorial */

/* Enunciado: o fatorial de um número natiural n é igual ao produto dos n primeiros naturais positivos (por definição, o fatorial de 0 é 1). ado um número natural n, calcule e exiba o seu fatorial */

#include <stdio.h>

int main(void) {
    int n, i, factorial = 1;

    printf("Numero? ");
    scanf("%d", &n);

    for(i = n; i != 0; i--)
        if(n == 0)
            printf("Fatorial de %d: 1", n);
        else 
            factorial *= i;
    printf("Fatorial de %d: %d", n, factorial);

    return 0;
}