/*
en-US: EXERCISE_17.C - Exercise 17. Minimum
- Statement: Create the recursive function minimum(L), which returns the smallest item in list L
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_17.C - Exercicio 17. Mínimo 
- Enunciado: Crie a função recursiva minimum(L), que devolve o menor item da lista L
*/

#include <stdio.h>
#include <stdlib.h>

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

int minimum(List L) {
    if(L->next == NULL) return L->data;
    
    int smallest = minimum(L->next);
    return L->data < smallest ? L->data : smallest;
}

int main(void) {
    List I = node(1, node(2, node(3, NULL)));

    printf("Smallest item on the list: %d", minimum(I));

    return 0;
}