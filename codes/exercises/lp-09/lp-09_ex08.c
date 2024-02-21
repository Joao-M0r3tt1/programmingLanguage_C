/*
en-US: EXERCISE_08.C - Exercise 08. Perimeter of a polygon
- Statement: Create the function perimeter(v, n), which returns the perimeter of a closed polygon given by a vector v with n points (consider n >= 3)
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_08.C - Exercicio 08. Perímetro de um polígono
- Enunciado: Crie a função perimetro(v, n), que devolve o perímetro de um polígono fechado dado por um vetor v com n pontos (considere n >= 3)

exit ex.:
perimeter: 8.0
*/

#include <stdio.h>
// #include <math.h>

typedef struct {
    int x;
    int y;
} Point;

float distance(Point p1, Point p2) {
    float d = 0, n = 1, /* Approximate initial value for the root */ precision = 0.000001; /* Desired accuracy */
    int delta_x = p2.x - p1.x;
    int delta_y = p2.y - p1.y;

    d = (delta_x * delta_x) + (delta_y * delta_y);

    // square root of a number using iterative methods, Newton-Raphson method
    while((d - n) > precision) {
        d = (d + n) / 2;
        n = ((delta_x * delta_x) + (delta_y * delta_y)) / d;
    }

    return d;
   // return sqrt((pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

float perimeter(Point v[], int n) {
    float total = 0;

    for(int i = 0; i < n; i++)
        total += distance(v[i], v[(i + 1) % n]);
    
    return total;
}

int main(void) {
    Point v[4] = {{0,2}, {2,2}, {2,0}, {0,0}};

    printf("Perimeter: %.1f\n", perimeter(v, 4));

    return 0;
}