/*
en-US: EXERCISE_11.C - Exercise 11. Sum
- Statement: Create the recursive function sum(L), which returns the sum of the items in list L
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_11.C - Exercicio 11. Soma
- Enunciado: Crie a função recursiva sum(L), que devolve a soma dos itens da lista L
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

int sum(List L) {
    if(!L) return 0;
    else return L->data + sum(L->next);
}

int main(void) {
    List I = node(1, node(2, node(3, NULL)));

    printf("Sum of the items in list = %d\n", sum(I));
    
    return 0;
}