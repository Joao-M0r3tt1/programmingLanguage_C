/*
en-US: EXERCISE_11.C - Exercise 11. Product
- Statement: create a recursive function that calculates the product of two natural a and b, using only addition and subtraction
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_11.C - Exercicio 11. Produto
- Enunciado: crie uma função recursiva que calcula o produto de dois naturais a e b, usando apenas soma e subtração
*/

#include <stdio.h>

int product(int a, int b) {
    if(a < 1 || b < 1) return 0;
    else return b + product((a - 1), b);

    /* or 
    if(b == 0 || a == 0) return 0;
    else return a + product(a, (b - 1));
    */
}

int main(void) {
    int n1, n2;

    printf("Factor 01 and factor 02? ");
    scanf("%d %d", &n1, &n2);

    printf("Product of %d * %d = %d", n1, n2, product(n1, n2));
    
    return 0;
}