/*
en-US: EXAMPLE_03.C - Example 03. String reading
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_03.C - Exemplo 03. Leitura de strings
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-08.pdf
*/

#include <stdio.h>

int main(void) {
    char v[513];

    printf("Whats your name? ");
    gets(v);

    printf("Hi %s!\n", v);

    return 0;
}