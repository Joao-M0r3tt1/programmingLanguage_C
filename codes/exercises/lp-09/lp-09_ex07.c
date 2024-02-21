/*
en-US: EXERCISE_07.C - Exercise 07. Distance between points on the Cartesian plane
- Statement: Complete the following program so that it works as shown below:
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_07.C - Exercicio 07. Distância entre pontos no plano cartesiano
- Enunciado: Complete o programa a seguir, de modo que ele funcione como está exemplificado abaixo:

exit ex.: 
1º point: 1,2
2º point: 4,6
Distance: 5.0
*/

#include <stdio.h>
// #include <math.h>

typedef struct {
    int point_01;
    int point_02;
} Point;

float distance(Point x, Point y) {
    float d = 0, n = 1, /* Approximate initial value for the root */ precision = 0.000001; /* Desired accuracy */
    int delta_x = x.point_01 - y.point_01;
    int delta_y = x.point_02 - y.point_02;

    d = (delta_x * delta_x) + (delta_y * delta_y);

    // square root of a number using iterative methods, Newton-Raphson method
    while((d - n) > precision) {
        d = (d + n) / 2;
        n = ((delta_x * delta_x) + (delta_y * delta_y)) / d;
    }

    return d;
   // return sqrt((delta_x * delta_x) + (delta_y + delta_y));
}

Point read_point(int n) {
    Point x;
    if(n == 1) {
        printf("(Xa,Ya) - Enter the coordinates of point A: ");
        scanf("%d,%d", &x.point_01, &x.point_02);
    } else {
        printf("(Xa,Ya) - Enter the coordinates of point B: ");
        scanf("%d,%d", &x.point_01, &x.point_02);
    }

    return x;
}

int main(void) {
    Point a = read_point(1);
    Point b = read_point(2);

    printf("\nDistance: %.1f\n", distance(a, b));

    return 0;
}