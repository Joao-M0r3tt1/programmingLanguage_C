/* FORMATACAODECAMPOS.C - Formatacao de campos */

#include <stdio.h>

int main(void) {
    int a = 678;
    float b = 12.3416;

    printf("%5d\n", a);    // __678 
    printf("%06d\n", a);   // 000678
    printf("%7.3f\n", b);  // _12.342

    return 0;
}