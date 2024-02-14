/*
en-US: EXERCISE_03.C - Exercise 03. String length
- Statement: create the function len(s), which returns the number of characters in the string s
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_03.C - Exercicio 03. Comprimento de string
- Enunciado: crie a função len(s), que devolve a quantidade de caracteres na string s
*/

#include <stdio.h>

int len(char s[]) {
    int sum = 0, i = 0;
    
    while(s[i++]) 
        sum += 1;

    return i;
}

int main(void) {
    char v[10] = "test";

    printf("Length: %d\n", len(v));     // 4

    return 0;
}