/*
en-US: EXERCISE_02.C - Exercise 02. Program for creating and displaying a list
- Statement: Complete and run the following program:
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_02.C - Exercicio 02. Programa para criação e exibição de lista
- Enunciado: Complete e execute o programa a seguir:proximo
*/

#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct node {
    Item item;
    struct node *next;
} *List;

List node(Item x, List p) {
    List n = malloc(sizeof(struct node));
    n->item = x;
    n->next = p;

    return n;
}

void display(List L) {
    while(L != NULL) {
        printf("%d\n", L->item);
        L = L->next;
    }
}

int main(void) {
    List I = node(3, node(1, node(5, NULL)));

    display(I);

    return 0;
}