/* CALCULADORASIMPLES.C - Exercício10. Calculadora simples - 2º versão*/

/* Enunciado: Usando ocomando if-else, dentro do swtch-case, altere o programa anterior para que uma divisão por zero cause a exibição de uma mensagem de alerta para o usuário */

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