/*
en-US: EXERCISE_04.C - Exercise 04. Size program
- Statement: Complete and run the program
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_04.C - Exercicio 04. Programa para tamanho
- Enunciado: Complete e execute o programa
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
    printf("[");

    while(L) {
        printf("%d", L->item);
        L = L->next;
        if(L) printf(",");
    }

    printf("]\n");
}

int size(List L) {
    int count = 0;

    while(L) {
        count++;
        L = L->next;
    }

    return count;
}

int main(void) {
    List I = node(3, node(1, node(5, NULL)));

    display(I);
    printf("\nSize = %d\n", size(I));

    return 0;
}