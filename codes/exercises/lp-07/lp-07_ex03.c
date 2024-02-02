/*
en-US: EXERCISE_03.C - Exercise 03. Recursive version of bubble sort
- Statement: create the function bsr(v, n), which uses the push() function and the bubble sort strategy, to organize the n items of the vector in ascending order - {19, 27, 31, 48, 52}
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_03.C - Exercicio 03. Versão recursiva de bubble sort
- Enunciado: crie a função bsr(v, n), que usa a função empurra() e a estratégia do bubble sort, para organizar os n itens do vetor em ordem crescente - {19, 27, 31, 48, 52}
*/

#include <stdio.h>

void push(int v[], int n) {
    if(n < 2) return;
    else {
        push(v, (n - 1));
        if(v[n - 2] > v[n - 1]) {
            int aux = v[n - 2];
            v[n - 2] = v[n - 1];
            v[n - 1] = aux;    
        }
    }
}

void recursive_bs(int v[], int n) {
    if(n < 2) return;
    else {
        push(v, n);
        recursive_bs(v, (n - 1));
    }
}

void display(int v[], int n) {
    printf("Exit: { ");
    for(int i = 0; i < n; i++) {
        printf("%d", v[i]);
        if(i < (n - 1)) printf(", ");
    }
    puts("}");
}

int main(void) {
    int vector[5] = {48, 19, 31, 52, 27};

    recursive_bs(vector, 5);
    display(vector, 5);

    return 0;
}