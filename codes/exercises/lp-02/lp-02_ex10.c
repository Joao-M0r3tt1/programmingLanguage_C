/*
en-US: EXERCISE_10.C - Exercise 10. Simple calculator - 2nd version
- Statement: Using the if-else command, within the switch-case, change the previous program so that division by zero causes an alert message to be displayed to the user
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_10.C - Exercicio 10. Calculadora simples - 2º versão
- Enunciado: Usando o comando if-else, dentro do swtch-case, altere o programa anterior para que uma divisão por zero cause a exibição de uma mensagem de alerta para o usuário
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
        if(y == 0)
            printf("It is not possible to divide by 0!");
        else
            printf("Value = %.2f\n", x / y);
        break;
    default:
        printf("Invalid operator: %c\n", o); break;
    }

    return 0;
}