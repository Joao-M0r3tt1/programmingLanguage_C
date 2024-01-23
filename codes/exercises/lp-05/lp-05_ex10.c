/*
en-US: EXERCISE_10.C - Exercise 10. Quotient
- Statement: create a function that calculates the quotient of the integer division of a natural a by a positive natural b, using only addition and subtraction
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_10.C - Exercicio 10. Quociente
- Enunciado: crie uma função que calcula o quociente da divisão inteira de um natural a por um natural positivo b, usando apenas soma e subtração
*/

#include <stdio.h>

int division(int dividend, int divider) {
    if(divider == 0) {
        puts("Error: Division by zero");
        return 0;
    }

    if(dividend < divider) return 0;
    else {
        return 1 + division((dividend - divider), divider);
    }
}

int main(void) {
    int n1, n2;

    printf("Dividend and divider? ");
    scanf("%d %d", &n1, &n2);

    printf("Result of %d / %d: %d", n1, n2, division(n1, n2));
    
    return 0;
}