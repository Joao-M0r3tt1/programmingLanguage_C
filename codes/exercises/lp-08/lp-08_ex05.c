/*
en-US: EXERCISE_05.C - Exercise 05. String concatenation
- Statement: create the function cat(s, t), which concatenates the string t at the end of the string s
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_05.C - Exercicio 05. Concatenação de string
- Enunciado: crie a função cat(s, t), que concatena a string t no final da string s
*/

#include <stdio.h>

void cat(char s[], char t[]) {
    int i = 0, j = 0;

    while(s[++i]);
    while(t[++j]);
    for(int n = 0; n <= j; n++)
        s[i++] = t[n];
}

int main(void) {
    char v[10] = "avo";
    char w[10] = "cado";

    cat(v, w);
    puts(v);    // avocado

    return 0;
}