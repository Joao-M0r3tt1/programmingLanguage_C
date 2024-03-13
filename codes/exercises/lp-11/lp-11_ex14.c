/*
en-US: EXERCISE_14.C - Exercise 14. Last
- Statement: Create the recursive function last(L), which returns the last item in list L
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_14.C - Exercicio 14. Último
- Enunciado: Crie a função recursiva last(L), que devolve o último item da lista L
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

int last(List L) {
    if(!L) return L->data;
    else {
        return last(L->next);
    }
}

int main(void) {
    List I = node(1, node(2, node(3, NULL)));

    printf("Last item in list: %d", last(I));

    return 0;
}