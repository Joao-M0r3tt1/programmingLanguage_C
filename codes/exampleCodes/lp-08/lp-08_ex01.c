/*
en-US: EXAMPLE_01.C - Example 01. Literal string size (or constant string)
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_01.C - Exemplo 01. Tamanho de cadeia literal (ou string constante)
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-08.pdf
*/

#include <stdio.h>

int main(void) {
    printf("Size in bytes: %ld\n", sizeof("STRING"));

    return 0;
}