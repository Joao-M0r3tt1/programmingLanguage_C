/*
en-US: EXERCISE_04.C - Exercise 04. Difference in pointers
- Statement: Create the function len(s), which returns the length of the string s, using pointer traversal and pointer difference
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_04.C - Exercicio 04. Diferença de ponteiros
- Enunciado: Crie a função len(s), que devolve o comprimento da string s, usando percurso via ponteiro e diferença de ponteiros
*/

#include <stdio.h>

int len(char *s) {
    char *p = s;

    while(*s) 
        s++;

    return s - p;   // s - p - 1  -- not to consider \0
}

int main(void) {
    printf("%d\n", len("teste"));

    return 0;
}