/*
en-US: EXERCISE_12.C - Exercise 12. String vector ordering
- Statement: change the following function so that it can be used to sort a vector v containing n strings, each of which has a maximum of 7 characters (not counting the null character)
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_12.C - Exercicio 12. Ordenação de vetor de string
- Enunciado: altere a função a seguir, de modo que ela possa ser usada para ordenar um vetor v contendo n strings, cada uma delas com no máximo 7 caracteres (sem contar o caractere nulo)

void bsort(int v[], int n) {
    for(int i = 1; i <= (n - 1); i++) 
        for(int j = 0; j < (n - i); j++)
            if(v[j] > v[j + 1]) {
                int x = v[j];
                v[j] = v[j + 1];
                v[j + 1] = x;
            }
}

*/

#include <string.h>

void bsortNames(char v[][8], int n) {
    for(int i = 1; i < n; i++) 
        for(int j = 0; j < (n - i); j++)
            if(strcmp(v[j], v[j + 1]) > 0) {
                char x[8];
                strcpy(x, v[j]);
                strcpy(v[j], v[j + 1]);
                strcpy(v[j + 1], x);
            }
}