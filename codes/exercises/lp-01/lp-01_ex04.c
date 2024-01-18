/* ASCII.C - Exercicios 5. ASCII */
/* Enunciado: Dado um caractere, exiba o código ASCII correspondente */

#include <stdio.h> 

int main(void) {
    char character;

    printf("Digite um caracter: ");
    scanf("%c", &character);
    printf("Caracter digitado = %c, Codigo ASCII = %d\n", character, character);

    return 0;
}