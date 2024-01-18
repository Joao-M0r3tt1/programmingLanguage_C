/*
en-US: EXERCISE_03.C - Exercise 03. Capitalization test
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_03.C - Exercicio 03. Teste de maiúscula
*/

#include <stdio.h>
#define uppercase(c) (c >= 'A' && c <= 'Z')

int main(void) {
    char x;

    printf("Character? ");
    scanf("%c", &x);

    printf("Uppercase: %s\n", uppercase(x) ? "Yes" : "No");

    return 0;
}