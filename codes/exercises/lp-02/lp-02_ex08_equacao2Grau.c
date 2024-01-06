/* EQUACAO2GRAU.C - Exercício 8. Equação do 2º grau */

/* Enunciado: dados os coeficientes (a!=0, b & c) de uma equação do 2º grau, informe quais são suas raízes reais (se elas existem). Use a fórmula de Bhaskara: x = (-b +- √b² -4*a*c) / (2*a) */

#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, c, delta;

    printf("Coeficientes? ");
    scanf("%f %f %f", &a, &b, &c);
    if(a == 0) puts("Coeficiente A == 0, invalido!");
    else {
        delta = ((b * b) - 4 * a * c);
        if(delta < 0) puts("Nenhuma raiz real para os coeficientes.");
        else if(delta == 0) {
            printf("Uma unica raiz real para os coeficientes.\n");
            printf("Raiz: x = %.2f\n", ((- b + sqrt(delta)) / (2 * a)));
        }
        else {
            printf("Duas raizes reais para os coeficientes.\n");
            printf("Raiz: x1 = %.2f\n", ((- b + sqrt(delta)) / (2 * a)));
            printf("Raiz: x2 = %.2f\n", ((- b - sqrt(delta)) / (2 * a)));
        }
    }

    return 0;
}