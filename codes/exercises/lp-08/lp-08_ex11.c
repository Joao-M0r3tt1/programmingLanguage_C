/*
en-US: EXERCISE_11.C - Exercise 11. String vector display
- Statement: create the function displays(v, n), which displays a vector v containing n strings, each with a maximum of 7 characters (not counting the null character)
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_11.C - Exercicio 11. Exibição de vetor de string
- Enunciado: crie a função exibe(v, n), que exibe um vetor v contendo n strings, cada uma delas com no máximo 7 caracteres (sem contar o caractere nulo)
*/

#include <stdio.h>

void display(char v[][8], int n) {
    for(int i = 0; i < n; i++)
        puts(v[i]);
}

int main(void) {
    char v[][8] = { "Beatriz",
                    "Joao",
                    "Beatriz",
                    "Joao",
                    "Beatriz" };
    
    display(v, 5);

    return 0;
}