/* TABELAVERDADEOR.C - Exercicio 2. Tabela-verdade do operador || */

/* Enunciado: Com base no programa TABELAVERDADEAND.C crie um programa para exibir a tabela-verdade do operador or */

#include <stdio.h>

int main(void) {
    printf("0 || 0 == %d\n", 0 || 0);   // 0
    printf("0 || 1 == %d\n", 0 || 1);   // 1
    printf("1 || 0 == %d\n", 1 || 0);   // 1
    printf("1 || 1 == %d\n", 1 || 1);   // 1

    return 0;
}