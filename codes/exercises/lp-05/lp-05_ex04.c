/*
en-US: EXERCISE_04.C - Exercise 04. Calculation of the harmonic series
- Statement: create the recursive function h(n), which calculates the sum of the first n >= 1 terms of the harmonic series (1 + 1/2 + 1/3 + ... + 1/n)
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_04.C - Exercicio 04. Cálculo da série harmônica
- Enunciado: crie a função recursiva h(n), que calcula a soma dos n >= 1 primeiros termos da série harmônica (1 + 1/2 + 1/3 + ... + 1/n)
_____________________________________________________________________________________________________________________

particular case:
h(5) ----------> 2.28
  |               |  
  |               | +1/5 
  |               |
h(4) ----------> 2.08   

general case:
h(n) ----------> h(n-1) + 1/n
  |                  |  
  |                  | +1/n 
  |                  |
h(n-1) ----------> h(n-1)
*/

#include <stdio.h>

float h(int n) {
    if(n == 1) return 1;
    else return (1.0 / n) + h(n - 1);
}

int main(void) {
    int n;

    printf("Number? ");
    scanf("%d", &n);

    printf("Harmonica = %.2f\n", h(n));

    return 0;
}