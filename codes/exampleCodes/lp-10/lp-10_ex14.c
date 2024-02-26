/*
en-US: EXAMPLE_14.C - Example 14. Function call via pointer
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_14.C - Exemplo 14. Chamada de função via ponteiro
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-10.pdf
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double (*p) (double);

    p = sqrt;
    printf("Square root: %f\n", p(9));

    return 0;
}