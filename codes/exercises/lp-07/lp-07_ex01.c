/*
en-US: EXERCISE_01.C - Exercise 01. Testing the bsort() function
- Statement: create the function displays(v, n), complete and run the program
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_01.C - Exercicio 01. Teste da função bsort()
- Enunciado: crie a função exibe(v, n), complete e execute o programa
*/

#include <stdio.h>

void display(int v[], int n) {
    puts("Vector:");
    for(int i = 0; i < n; i++) {
        printf("{%d | }", v[i]);
    }
}

void exchange(int v[], int i, int j) {
    int x = v[i];
    v[i] = v[j];
    v[j] = x;
}

void bsort(int v[], int n) {
    for(int i = 1; i < (n - 1); i++)
        for(int j = 0; j < (n - i); j++)
            if(v[j] > v[j + 1])
                exchange(v, j, (j + 1));
}

int main(void) {
    int vector[10] = {83, 31, 91, 46, 27, 20, 96, 25, 96, 80};

    bsort(vector, 10);
    display(vector, 10);

    return 0;
}