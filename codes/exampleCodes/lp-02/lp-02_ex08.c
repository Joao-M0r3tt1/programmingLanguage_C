/*
en-US: EXAMPLE_08.C - Example 08. Classification of triangles
- Statement: given any three positive numbers, check if they can represent the measurements of the sides of a triangle and, if they can, classify the triangle as equilateral, isosceles or scalene
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_08.C - Exemplo 08. Classificação de triângulos
- Enunciado: dados três números positivos quaisquer, verifique se eles podem representar as medidas dos lados de um triângulo e, se puderem classifique o triângulo em equilátero, isósceles ou escaleno
*/

#include <stdio.h>

int main(void) {
    float a, b, c;

    printf("Numbers? ");
    scanf("%f %f %f", &a, &b, &c);
    if(a < b + c && b < a + c && c < a + b) {
        printf("Triangle: ");
        if(a == b && b == c) puts("equilateral");
        else if(a == b || a == c || b == c) puts("isosceles");
        else puts("scalene");
    }
    else puts("It's not a triangle!");

    return 0;
}