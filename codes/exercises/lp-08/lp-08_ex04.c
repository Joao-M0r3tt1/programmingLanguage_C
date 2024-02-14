/*
en-US: EXERCISE_04.C - Exercise 04. String inversion (reverse string)
- Statement: create the function rev(s), which reverses the order of characters in the string s. Use len()
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_04.C - Exercicio 04. Inversão de string (string reversa)
- Enunciado: crie a função rev(s), que inverte a ordem dos caracteres na string s. Use len()
*/

#include <stdio.h>

int len(char s[]) {
    int i = 0;

    while(s[++i]);

    return i;
}

void rev(char s[]) {
    char aux;
    int length = len(s);

    for(int i = 0; i < (length / 2); i++) {
        aux = s[i];
        s[i] = s[length - (i + 1)];
        s[length - (i + 1)] = aux;
    }
}

int main(void) {
    char v[10] = "ROMA";

    rev(v);
    puts(v);    // AMOR

    return 0;
}