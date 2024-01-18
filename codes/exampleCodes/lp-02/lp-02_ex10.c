/*
en-US: EXAMPLE_10.C - Example 10. Simple calculator - 1st version
- Statement: given an expression composed of two real numbers and an arithmetic operator, display its value
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_10.C - Exemplo 10. Calculadora simples - 1º versão
- Enunciado: dada uma expressão composta por dois números reais e um operador aritmético, exiba seu valor
*/

#include <stdio.h>

int main(void) {
    float x, y;
    char o; 

    printf("Expression? ");
    scanf("%f %c %f", &x, &o, &y);

    switch (o) {
    case '+':
        printf("Value = %.2f\n", x + y); break;
    case '-':
        printf("Value = %.2f\n", x - y); break;
    case '*':
        printf("Value = %.2f\n", x * y); break;
    case '/':
        printf("Value = %.2f\n", x / y); break;
    default:
        printf("Invalid operator: %c\n", o); break;
    }

    return 0;
}