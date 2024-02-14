/*
en-US: EXAMPLE_07.C - Example 07. String comparison
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_07.C - Exemplo 07. Comparação de strings
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-08.pdf
*/

#include <stdio.h> 

int main(void) {
    char v[5] = "one";
    char w[5] = "one";

    if(v == w) puts("Equals");
    else puts("Different");

    return 0;
}