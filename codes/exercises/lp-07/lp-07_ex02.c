/*
en-US: EXERCISE_02.C - Exercise 02. The push() function
- Statement: create the function push(v, n), which "pushes" a maximum item from vector v to position n-1 of v. For example, the code below should produce the output: {19, 31, 48, 27, 52}
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_02.C - Exercicio 02. A função empurra()
- Enunciado: crie a função empurra(v, n), que "empurra" um item máximo do vetor v para a posição n-1 de v. Por exemplo, o código abaixo deve produzir a saída: {19, 31, 48, 27, 52}
*/

#include <stdio.h>

void display(int v[], int size_v) {
    printf("Exit: { ");
    for(int i = 0; i < size_v; i++)
        printf("%d | ", v[i]);
    puts("}");
}

void exchange(int v[], int position_i, int position_j) {
    int aux = v[position_i];
    v[position_i] = v[position_j];
    v[position_j] = aux;
}

void push(int v[], int size_v) {
    if(size_v < 2) return;
    else {
        push(v, (size_v - 1));
        if(v[size_v - 2] > v[size_v - 1]) exchange(v, (size_v - 2), (size_v - 1));
    } 
}

int main(void) {
    int vector[5] = {48, 19, 31, 52, 27};

    push(vector, 5);
    display(vector, 5);

    return 0;
}