/*
en-US: EXERCISE_03.C - Exercise 03. Termial calculation
- Statement: create the recursive function termial(n), which calculates the sum of the first n natural numbers (n >= 0)
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_03.C - Exercicio 03. Cálculo de termial
- Enunciado: crie a função recursiva termial(n), que calcula a soma dos n primeiros números naturais (n >= 0) 
_____________________________________________________________________________________________________________________

particular case:
termial(5) ----------> 15
    |                   |  
    |                   | +5 
    |                   |
termial(4) ----------> 10   

general case:
termial(n) ----------> termial(n-1) + n
    |                       |  
    |                       | +n 
    |                       |
termial(n-1) ----------> termial(n-1)
*/

#include <stdio.h>

int termial(int n) {
    if(n == 0) return 0;
    else return n + termial(n - 1);
}

int main(void) {
    int n;

    printf("Number? ");
    scanf("%d", &n);

    printf("Termial = %d\n", termial(n));

    return 0;
}