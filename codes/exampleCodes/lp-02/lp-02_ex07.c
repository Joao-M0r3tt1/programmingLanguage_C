/*
en-US: EXAMPLE_07.C - Example 07. Use of the conditional operator
- Statement: Given two distinct integers, state which one is the largest
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_07.C - Exemplo 07. Uso do operador condicional
- Enunciado: Dados dois números inteiros distintos, informe qual dele é o maior
*/

#include <stdio.h>

int main(void) {
    int a, b;

    printf("Numbers? ");
    scanf("%d %d", &a, &b);
    printf("Bigger = %d\n", (a > b ? a : b));

    return 0;
}