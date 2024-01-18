/*
en-US: EXERCISE_08.C - Exercise 08. Tiny
- Statement: create the function lowercase(c), which returns the lowercase letter corresponding to the character c (or the character c itself, if it is not an uppercase letter)
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_08.C - Exercicio 08. Minúscula
- Enunciado: crie a função minuscula(c), que devolve a letra minúscula correspondente ao caractere c (ou o próprio caractere c, se ele não for uma letra maiúscula)
*/

#include <stdio.h>

int lowercase(int c) {
    if(c >= 65 && c <= 90) return c;
    else return (c - 32);
}

int main(void) {
    char c;

    printf("Character? ");
    scanf("%c", &c);

    printf("Uppercase: %c", lowercase(c));

    return 0;
}