/* CALCULADORASIMPLES.C - Calculadora simples - 1º versão*/

/* Enunciado: dada uma expressão composta por dois números reais e um operador aritmético, exiba seu valor */

#include <stdio.h>

int main(void) {
    float x, y;
    char o; 

    printf("Expressao? ");
    scanf("%f %c %f", &x, &o, &y);

    switch (o) {
    case '+':
        printf("Valor = %.2f\n", x + y); break;
    case '-':
        printf("Valor = %.2f\n", x - y); break;
    case '*':
        printf("Valor = %.2f\n", x * y); break;
    case '/':
        printf("Valor = %.2f\n", x / y); break;
    default:
        printf("Operador invalido: %c\n", o); break;
    }

    return 0;
}