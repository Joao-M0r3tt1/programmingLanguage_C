/*
en-US: EXERCISE_09.C - Exercise 09. Distance
- Statement: Given the coordinates (xp, yp) and (xq, yq), of two points P and Q on the Cartesian plane, display the distance between them
[Hint: use the Pythagorean Theorem] dAB² = (XB - XA)² + (YB - YA)²
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_09.C - Exercicio 09. Distancia
- Enunciado: Dadas as coordenadas (xp, yp) e (xq, yq), de dois pontos P e Q no plano cartesiano, exiba a distãncia entre eles
[Dica: use o Teorema de Pitágoras] dAB² = (XB - XA)² + (YB - YA)²
*/

#include <stdio.h> 
#include <math.h>

int main(void) {
    int xp, yp, xq, yq;
    float distance;

    printf("Coordinates - (xp, yp, xq, yq)? ");
    scanf("%d %d %d %d", &xp, &yp, &xq, &yq);
    distance = sqrt(pow((xq - xp), 2) + pow((yq - yp), 2));
    printf("Distance between points = %.5f", distance);

    return 0;
}