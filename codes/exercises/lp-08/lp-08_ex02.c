/*
en-US: EXERCISE_02.C - Exercise 02. String comparison (case insensitive)
- Statement: the _stricmp(s) function, declared in string.h, compares strings without considering that corresponding case is different. Using this function, change and test the exercise program lp-08_ex01.c
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_02.C - Exercicio 02. Comparação de strings (insensível ao caso)
- Enunciado: a função _stricmp(s), declarada em string.h, compara strings sem considerar que maiúsculas e minúsculas correspondentes são distintas. Usando essa função, altere e teste o programa do exercício lp-08_ex01.c
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[513];

    printf("Password? ");
    gets(s);

    if(!_stricmp(s, "Abracadabra")) puts("Correct password!");
    else puts("Incorrect password!");

    return 0;
}