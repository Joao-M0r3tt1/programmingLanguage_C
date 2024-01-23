/*
en-US: EXERCISE_02.C - Exercise 02. Potency calculation
- Statement: create the recursive function potency(x, n), which calculates the power of a real number x != 0 raised to a natural number n
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_02.C - Exercicio 02. Cálculo de potência
- Enunciado: crie a função recursiva potencia(x, n), que calcula a potência de um número real x != 0 elevado a um número natural n 
_____________________________________________________________________________________________________________________

particular case:
pot(2,5) ----------> 32
    |                |  
    |                | *2 
    |                |
pot(2,4) ----------> 16   

general case:
pot(x,n) ----------> x*pot(x,n-1)
    |                     |  
    |                     | *x 
    |                     |
pot(x,n-1) ----------> pot(x,n-1) 
*/

#include <stdio.h>

float potency(float x, int n) {
    if(n == 0) return 1;
    else return x * potency(x, n - 1);
}

int main(void) {
    float x; 
    int n;

    printf("Base and exponent? ");
    scanf("%f %d", &x, &n);

    printf("Potency = %.1f\n", potency(x, n));

    return 0;
}