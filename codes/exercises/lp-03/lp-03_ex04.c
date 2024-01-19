/*
en-US: EXERCISE_04.C - Exercise 04. Potency
- Statement: the power of a real number x raised to a positive natural number n is equal to the product of n factors equal to x (by definition, every number raised to 0 is 1). Given a real number x and a natural number n, calculate and display the power xⁿ
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_04.C - Exercicio 04. Potência
- Enunciado: a potência de um número real x elevado a um número natural positivo n é igual ao produto de n fatores iguais a x (por definição, todo número elevado a 0 é 1). Dados um número real x e um número natural n, calcule e exiba a potência xⁿ
*/

#include <stdio.h>

int main(void) {
    float x, product = 1;
    int n;

    printf("Numbers (real and natural)? ");
    scanf("%f %d", &x, &n);
    
    for(int i = 0; i <= n; i++)
        if(n == 0) 
            printf("Potency of %f^%d is: 1", x, n);
        else
            product *= x;
    printf("Potency of %.0f^%d is: %f", x, n, product);
    
    return 0;
}