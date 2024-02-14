/*
en-US: EXAMPLE_02.C - Example 02. String initiation
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_02.C - Exemplo 02. Iniciação de strings
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-08.pdf
*/

#include <stdio.h>

int main(void) {
    char v[] = { 'S', 'A', 'Y' };
    char w[] = "HI";

    printf("v: %s\nw: %s\n", v, w);

    return 0;
}