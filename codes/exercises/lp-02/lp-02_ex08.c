/*
en-US: EXERCISE_08.C - Exercise 08. 2nd degree equation
- Statement: given the coefficients (a!=0, b & c) of a 2nd degree equation, state what its real roots are (if they exist). Use Bhaskara's formula: x = (-b +- √b² -4*a*c) / (2*a)
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_08.C - Exercicio 08. Equação do 2º grau
- Enunciado: dados os coeficientes (a!=0, b & c) de uma equação do 2º grau, informe quais são suas raízes reais (se elas existem). Use a fórmula de Bhaskara: x = (-b +- √b² -4*a*c) / (2*a)
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, c, delta;

    printf("Coefficients? ");
    scanf("%f %f %f", &a, &b, &c);
    if(a == 0) puts("Coefficient A == 0, invalid!");
    else {
        delta = ((b * b) - 4 * a * c);
        if(delta < 0) puts("No real roots for the coefficients.");
        else if(delta == 0) {
            printf("A single real root for the coefficients.\n");
            printf("Root: x = %.2f\n", ((- b + sqrt(delta)) / (2 * a)));
        }
        else {
            printf("Two real roots for the coefficients.\n");
            printf("Root: x1 = %.2f\n", ((- b + sqrt(delta)) / (2 * a)));
            printf("Root: x2 = %.2f\n", ((- b - sqrt(delta)) / (2 * a)));
        }
    }

    return 0;
}