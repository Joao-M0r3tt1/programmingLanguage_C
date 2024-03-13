/*
en-US: EXERCISE_10.C - Exercise 10. Size
- Statement: Create the recursive function len(L), which returns the size of the list L
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_10.C - Exercicio 10. Tamanho
- Enunciado: Crie a função recursiva len(L), que devolve o tamanho da lista L
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

int len(List L) {
    if(L == NULL) return 0;
    else return 1 + len(L->next);
}

int main(void) {
    List I = node(1, node(2, node(3, NULL)));

    printf("List size = %d\n", len(I));
    
    return 0;
}