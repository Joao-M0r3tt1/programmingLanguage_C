/*
en-US: EXERCISE_05.C - Exercise 05. Sum of list items
- Statement: Add a function to the exercise program lp-11_ex04.c to calculate the sum of the list items. For example, considering that I points to the list of integers [3, 1, 5], the sum(I) call should return the answer 9
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_05.C - Exercicio 05. Soma dos itens da lista
- Enunciado: Adicione no programa do exercício lp-11_ex04.c uma função para calcular a soma dos itens da lista. Por exemplo, considerando que I aponta a lista de inteiros [3, 1, 5], a chamada soma(I) deve devolver a resposta 9
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

int sum(List L) {
    int items_sum = 0;

    while(L) {
        items_sum += L->item;
        L = L->next;
    }

    return items_sum;
}

int main(void) {
    List I = node(3, node(1, node(5, NULL)));

    display(I);
    printf("\nSize = %d\nSum = %d\n", size(I), sum(I));

    return 0;
}