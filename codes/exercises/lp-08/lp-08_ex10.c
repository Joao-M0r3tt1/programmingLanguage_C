/*
en-US: EXERCISE_10.C - Exercise 10. Character occurrences in string
- Statement: create the function occurrences(c, s), which returns the number of times that the character c occurs in the strng s
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_10.C - Exercicio 10. Ocorrências de caractere em string
- Enunciado: crie a função occorencias(c, s), que devolve a quantidade de vezes que o caracter c ocorre na strng s
*/

#include <stdio.h>

int occurrences(char c, char s[]) {
    int counter = 0, sum = 0;

    while(s[counter]) {
        if(c == s[counter]) sum++;
        counter++;
    }

    return sum;
}

int main(void) {
    char v[] = "banana";

    printf("Occurrences: %d\n", occurrences('a', v));   // 3

    return 0;
}