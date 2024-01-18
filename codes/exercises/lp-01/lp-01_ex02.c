/* BYTES.C - Exercicios 3. Bytes */
/* Enunciado: Crie um programa para informar quantos Bytes são necessários para representar os resultados das expressões 7/2 e 7/2.0, respectivamente. */

#include <stdio.h> 

int main(void) {

    printf("Sao necessarios = %d Bytes, para representar a expressao 7/2\n", sizeof(7/2));
    printf("Sao necessarios = %d Bytes, para representar a expressao 7/2.0\n", sizeof(7/2.0));

    return 0;
}