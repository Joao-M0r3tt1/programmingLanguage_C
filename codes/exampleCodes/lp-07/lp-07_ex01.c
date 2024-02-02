/*
en-US: EXAMPLE_01.C - Example 01. Exchange function
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_01.C - Exemplo 01. Função troca
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-07.pdf
*/

#include <stdio.h>

void exchange(int vector[], int position_i, int position_j) {
    int x = vector[position_i];

    vector[position_i] = vector[position_j];
    vector[position_j] = x;
}