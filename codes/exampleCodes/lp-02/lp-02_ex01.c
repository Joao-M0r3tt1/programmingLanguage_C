/*
en-US: EXAMPLE_01.C - Example 01. The bool type
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_01.C - Exemplo 01. O tipo bool
*/

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool a = false, b = 7;

    printf("Bool occupies: %d Bytes\nFalse and represented by: %d in Boolean\nEverything that is non-zero is represented by: %d in Boolean\n", sizeof(bool), a, b);    // 1 0 1
    /* printf("%d %d %d\n", sizeof(bool), p, q); */

    return 0; 
}
