/*
en-US: EXERCISE_05.C - Exercise 05. Newton's method
- Statement: Create a function to calculate the approximate square root e, of a non-negative real number x, using the following method proposed by Newton

1st: guess an initial value for r equal to x/2
2nd: if the absolute value of (r² - x) is less than 0.001, return r as an answer
3rd: otherwise, do r = (r² + x) / (2r) and return to the 2nd step

In addition to the function that calculates the root, also create functions that calculate the absolute value and square of a real number and create a main program to test its operation
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_05.C - Exercicio 05. Método de Newton
- Enunciado: Crie uma função para calcular a raiz quadrada aproximada e, de um número real não negativo x, usando o seguinte método proposto por Newton 

1º: chute um valor inicial para r igual a x/2
2º: caso o valor absoluto de (r² - x) seja inferior a 0.001, devolva r como resposta
3º: caso contrário, faça r = (r² + x) / (2r) e volte ao 2º passo

Além da função que calcula a raiz, crie também as funções que calculam o valor absoluto e o quadrado de um número real e faça um prgrma principal para testar seu funcionamento
*/

#include <stdio.h>

double square(double a) {
    return a * a;
}

double absolute(double a) {
    return (a > 0) ? a : -a; 
}

double square_root(double a) {
    double r;

    r = a / 2;
    while(absolute(square(r) - a) >= 0.001)
        r = (square(r) + a) / (2 * r);

    return r;
}

int main(void) {
    double x;

    printf("Number? ");
    scanf("%lf", &x);

    printf("Square root of %.0lf is: %.11lf\n", x, square_root(x));

    return 0;
}