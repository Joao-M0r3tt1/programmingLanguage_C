/*
en-US: EXERCISE_12.C - Exercise 12. Clone
- Statement: Create the recursive function clone(L), which returns a copy of the list L
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_12.C - Exercicio 12. Clone
- Enunciado: Crie a função recursiva clone(L), que devolve uma cópia da lista L
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

List clone(List L) {
    if(!L) return NULL;
    else return node(L->data, clone(L->next));
}

int main(void) {
    List I = node(1, node(2, node(3, NULL)));
    List cloneList = clone(I);

    return 0;
}