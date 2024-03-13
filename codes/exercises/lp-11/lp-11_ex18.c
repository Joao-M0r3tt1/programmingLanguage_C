/*
en-US: EXERCISE_18.C - Exercise 18. Sorted
- Statement: Create the recursive function sorted(L), which checks whether the list L is sorted
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_18.C - Exercicio 18. Ordenada 
- Enunciado: Crie a função recursiva sorted(L), que verifica se a lista L está ordenada
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool sorted(List L) {
    if(!L || L->next == NULL) return true;
    if(L->data > L->next->data) return false;
    return sorted(L->next);
}

int main(void) {
    List I = node(5, node(2, node(7, NULL)));

    printf("Ordered list: %s", sorted(I) ? "Yes" : "No");

    return 0;
}