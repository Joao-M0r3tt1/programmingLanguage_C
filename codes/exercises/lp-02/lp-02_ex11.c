/*
en-US: EXERCISE_11.C - Exercise 11. Simple calculator - 3rd version
- Statement: change the previous program so that the characters * and x can be used to represent a product, and the characters / and : can be used to represent a division
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_11.C - Exercicio 11. Calculadora simples - 3º versão
- Enunciado: altere o programa anterior de modo que os caracteres * e x possam ser usados para representar um produto, e os caracteres / e : possem ser usados para representar uma divisão
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
    case 'x':
    case '*':
        printf("Value = %.2f\n", x * y); break;
    case ':':
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