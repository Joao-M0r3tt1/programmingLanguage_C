/*
en-US: EXERCISE_06.C - Exercise 06. List destruction program
- Statement: Create a program to test the list destruction function
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_06.C - Exercicio 06. Programa para destruição de lista
- Enunciado: Crie um programa para testar a função de destruição de lista
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

void destroy(List *L) {
    List n;

    while(*L) {
        n = *L;
        *L = n->next;
        free(n);
    }
    printf("List destroyed successfully\n");
}

int main(void) {
    List I = node(8, node(4, NULL));

    display(I);
    destroy(&I);

    return 0;
}