/*
en-US: EXAMPLE_10.C - Example 10. Function that returns structure as a response
- Statement: A function can return a structure as a response
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_10.C - Exemplo 10. Função que devolve estrutura como resposta
- Enunciado: Uma função pode devolver uma estrutura como resposta
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct { float x1; float x2; } Roots;

Roots equation(float a, float b, float c) {
    float d = pow(b, 2) - 4 * a * c;

    if(a == 0 || d < 0) { puts("Error!"); abort(); }
    Roots s = {(-b - sqrt(d)) / (2 * a), (-b + sqrt(d)) / (2 * a)};

    return s;
}

int main(void) {
    Roots r = equation(1, -5, 6);   // x² - 5x + 6 = 0

    printf("Roots of the equation = {%.1f, %.1f}\n", r.x1, r.x2);

    return 0;
}