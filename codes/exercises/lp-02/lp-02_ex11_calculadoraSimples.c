/* CALCULADORASIMPLES.C - Exercício 11. Calculadora simples - 3º versão*/

/* Enunciado: altere o programa anterior de modo que os caracteres * e x possam ser usados para representar um produto, e os caracteres / e : possem ser usados para representar uma divisão */

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
    case 'x':
    case '*':
        printf("Valor = %.2f\n", x * y); break;
    case ':':
    case '/':
        if(y == 0)
            printf("Nao e possivel realizar divisoes por 0!");
        else
            printf("Valor = %.2f\n", x / y);
        break;
    default:
        printf("Operador invalido: %c\n", o); break;
    }

    return 0;
}