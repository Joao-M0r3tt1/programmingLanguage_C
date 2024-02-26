/*
en-US: EXAMPLE_06.C - Example 06. literal string
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_06.C - Exemplo 06. Cadeia literal
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-10.pdf
*/

#include <stdio.h>

int main(void) {
    printf("String address: %p\n", "ONE");
    printf("Value in address: %c\n", *"ONE");

    return 0;
}