/*
en-US: EXERCISE_08.C - Exercise 08. Character position in string
- Statement: create the function pos(c, s), which returns the position of the first occurrence of the character c in the string s (or -1, if the character c is not in s)
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_08.C - Exercicio 08. Posição de caractere em string
- Enunciado: crie a função pos(c, s), que devolve a posição da primeira ocorrência do caractere c na string s (ou -1, caso o caractere c não esteja em s)
*/

#include <stdio.h>

int pos(char c, char s[]) {
    int counter = 0;

    while(s[counter]) {
        if(s[counter] == c) return counter;
        counter++;
    }

    return -1;
}

int main(void) {
    char v[10] = "35171";

    printf("Position of 1: %d\n", pos('1', v));     // 2
    printf("Position of 9: %d\n", pos('9', v));     // -1

    return 0;
}