/*
en-US: EXERCISE_21.C - Exercise 21. replacement
- Statement: Create the recursive function replace(x, y, L), which replaces occurrences of x with y in the list L
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_21.C - Exercicio 21. Substituição 
- Enunciado: Crie a função recursiva replace(x, y, L), que substitui ocorrências de x por y na lista L
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

void replace(int x, int y, List L) {
    if(!L) return;
    if(x == L->data) L->data = y;
    
    replace(x, y, L->next);
}

int main(void) {
    List I = node(5, node(2, node(7, NULL)));
    int x = 5, y = 2;

    replace(x, y, I);

    return 0;
}