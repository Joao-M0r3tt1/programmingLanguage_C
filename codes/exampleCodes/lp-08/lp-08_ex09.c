/*
en-US: EXAMPLE_09.C - Example 09. String vector
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_09.C - Exemplo 09. Vetor de strings
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-08.pdf
*/

#include <stdio.h>

int main(void) {
    char v[][8] = { "Beatriz",
                    "Joao",
                    "Beatriz",
                    "Joao",  
                    "Beatriz" };
    
    for(int i = 0; i < 5; i++) puts(v[i]);

    return 0;
}