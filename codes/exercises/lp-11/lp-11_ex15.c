/*
en-US: EXERCISE_15.C - Exercise 15. Belongs
- Statement: Create the recursive function in(x, L), which checks whether item x is in list L
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_15.C - Exercicio 15. Pertinência
- Enunciado: Crie a função recursiva in(x, L), que verifica se o item x está na lista L
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

bool in(int x, List L) {
    if(!L) return false;
    if(x == L->data) return true;
    
    return in(x, L->next);
}

int main(void) {
    List I = node(1, node(2, node(3, NULL)));

    printf(in(2, I) ? "The number belongs to the list" : "The number does not belong to the list");

    return 0;
}