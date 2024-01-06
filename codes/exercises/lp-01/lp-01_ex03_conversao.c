/* CONVERSAO.C - Exercicios 4. Conversao */
/* Enunciado: Dado o número inteiro na base 10, exibir o valor correspondente em base 16 */

#include <stdio.h>

int main(void) {
    int number;

    printf("Informe um numero: ");
    scanf("%d", &number);
    printf("Conversao para base 16 = %X\n", number);

    return 0;
}