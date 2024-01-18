/*
en-US: EXAMPLE_03.C - Example 03. Result of arithmetic operators
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_03.C - Exemplo 03. Resultado dos operadores aritmeticos
*/

#include <stdio.h> 

int main(void) {
    float a, b;
    int c, d;

    c = 1;
    d = 2;
    printf("Result: %.1i\n", c + d);

    a = 8.0;
    b = 4;
    printf("Result: %.1f\n", a - b);

    c = 3;
    d = 7;
    printf("Result: %.1i\n", c * d);

    c = 7;
    d = 2;
    printf("Result: %.1i\n", c / d);

    c = 7;
    a = 2.0;
    printf("Result: %.1f\n", c / a);

    c = 7;
    d = 2;
    printf("Result: %.1i\n", c % d);

    /*
    float x = 7.0;
    int y = 2;
    print("Result: %.1f\n", x % y); 
    Result in error, it is not possible to remove % from a float type variable
    */

    return 0;
}