/* INCREMENTODECREMENTOEXPRESSAO.C - Uso de incremento/decremento em expressão - 1º versão*/

#include <stdio.h>

int main(void) {
    int x = 5, y, z;

    y = ++x + 2;
    z = x-- + 2;
    printf("x = %d\ny = %d\nz = %d\n", x, y, z);  // x = 5    y = 8     z = 8

    return 0;
}