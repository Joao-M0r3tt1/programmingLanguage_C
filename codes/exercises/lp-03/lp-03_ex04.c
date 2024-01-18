/* POTENCIA.C - Exercicio 4. Potência */

/* Enunciado: a potência de um número real x elevado a um número natural positivo n é igual ao produto de n fatores iguais a x (por definição, todo número elevado a 0 é 1). Dados um número real x e um número natural n, calcule e exiba a potência x^n */

#include <stdio.h>

int main(void) {
    float x, product = 1;
    int n;

    printf("Numeros (real; natural)? ");
    scanf("%f %d", &x, &n);
    
    for(int i = 0; i <= n; i++)
        if(n == 0) 
            printf("Potencia de %f^%d e: 1", x, n);
        else
            product *= x;
    printf("Potencia de %.0f^%d e: %f", x, n, product);
    
    return 0;
}