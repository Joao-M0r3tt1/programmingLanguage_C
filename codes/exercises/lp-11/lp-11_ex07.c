/*
en-US: EXERCISE_07.C - Exercise 07. Last item on the list
- Statement: Create the function last(L), which returns the last item in List L (note that if the list is empty, a fatal error should occur). Then write a program to test this function
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_07.C - Exercicio 07. Último item da lista
- Enunciado: Crie a função ultimo(L), que devolve o último item da Lista L (note que, se a lista estiver vazia, deve ocorrer um erro fatal). Emseguida, faça um programa para testar essa função
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
    
    if(L) {
        printf("[");
        while(L) {
            printf("%d", L->item);
            L = L->next;
            if(L) printf(",");
        }
        printf("]\n");
    }
    else printf("Empty list - []\n");
}

int last(List L) {
    int n;
    
    if(L == NULL) {
        printf("Fatal error: Empty list!\n");
        exit(EXIT_FAILURE);
    }
    else 
        while(L) {
            n = L->item;
            L = L->next;
        }
        
    return n;
}

void destroy(List *L) {
    while(*L) {
        List n = *L;
        *L = n->next;
        free(n);
    }
}

int main(void) {
    List I = node(4, node(8, NULL));

    display(I);
    printf("Last item on the list: %d\n", last(I));
    destroy(&I);
    
    return 0;
}