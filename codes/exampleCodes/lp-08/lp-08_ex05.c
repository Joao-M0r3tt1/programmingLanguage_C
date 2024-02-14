/*
en-US: EXAMPLE_05.C - Example 05. String assignment
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_05.C - Exemplo 05. Atribuição de strings
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-08.pdf
*/

#include <stdio.h>

int main(void) {
    char v[5] = 'one';
    char w[5];

    // w = v;  ->  error! 
    puts(v);
    puts(w);

    return 0;
}