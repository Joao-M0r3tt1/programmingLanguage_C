/*
en-US: EXAMPLE_04.C - Example 04. String display
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_04.C - Exemplo 04. Exibição de strings
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-08.pdf
*/

#include <stdio.h>

int main(void) {
    char v[513];

    printf("Whats your name? ");
    gets(v);
    puts(v);

    return 0;
}