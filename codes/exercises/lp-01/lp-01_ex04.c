/*
en-US: EXERCISE_04.C - Exercise 04. ASCII
- Statement: Given a character, display the corresponding ASCII code
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_04.C - Exercicio 04. ASCII
- Enunciado: Dado um caractere, exiba o código ASCII correspondente
*/

#include <stdio.h> 

int main(void) {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);
    printf("Entered character = %c, ASCII code = %d\n", character, character);

    return 0;
}