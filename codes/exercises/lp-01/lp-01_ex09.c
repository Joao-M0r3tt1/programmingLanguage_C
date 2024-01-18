/* DISTANCIA.C - Exercicios 10. Distancia */
/* Enunciado: Dadas as coordenadas (xp, yp) e (xq, yq), de dois pontos P e Q no plano cartesiano, exiba a distãncia entre eles
[Dica: use o Teorema de Pitágoras] dAB^2 = (XB - XA)^2 + (YB - YA)^2*/

#include <stdio.h> 
#include <math.h>

int main(void) {
    int xp, yp, xq, yq;
    float distance;

    printf("Informe as coordenadas na ordem - (xp, yp, xq, yq): ");
    scanf("%d %d %d %d", &xp, &yp, &xq, &yq);
    distance = sqrt(pow((xq - xp), 2) + pow((yq - yp), 2));
    printf("Distancia entre os pontos = %.5f", distance);

    return 0;
}