/*
en-US: EXERCISE_13.C - Exercise 13. Random
- Statement: Create the recursive function rnd(n, m), which returns a list of n random items in [0, m-1]
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_13.C - Exercicio 13. Aleatória
- Enunciado: Crie a função recursiva rnd(n, m), que devolve uma lista com n itens aleatórios em [0, m-1]
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int Data;
typedef struct node {
    Data data;
    struct node *next;
} *List;

List node(Data x, List p) {
    List n = malloc(sizeof(struct node));
    n->data = x;
    n->next = p;

    return n;
}

List rnd(int n, int m) {
    if(n == 0) return NULL;
    else {
        srand(time(NULL));
        return node(rand() % (m - 1), rnd(n - 1, m));
    }
}

int main(void) {
    List randomList = rnd(3, 10);

    return 0;
}