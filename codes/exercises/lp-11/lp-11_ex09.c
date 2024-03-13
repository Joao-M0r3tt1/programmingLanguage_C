/*
en-US: EXERCISE_09.C - Exercise 09. List inversion
- Statement: Create the inverse(L) function, which creates and returns a list containing the same items as L, but in reverse order. For example, if L is the list [1,2,3], the inverse(L) call should return the list [3,2,1]. Then write a program to test this function.
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_09.C - Exercicio 09. Inversão de lista
- Enunciado: Crie a função inversa(L), que cria e devolve uma lista contendo os mesmos itens de L, mas na ordem inversa. Por eexemplo, se L for a lista [1,2,3], a chamada inversa(L) deve devolver a lista [3,2,1]. Em seguida, faça um programa para testar essa função.
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
    printf("]\n\n");
}

List inverse(List L) {
    List inverseList = NULL;

    while(L) {
        inverseList = node(L->item, inverseList);
        L = L->next;
    }

    return inverseList;
}

int main(void) {
    List I = node(1, node(2, node(3, node(4, NULL))));

    printf("Original list:\n");
    display(I);

    List inverseList = inverse(I);
    
    printf("Reverse list:\n");
    display(inverseList);
    
    return 0;
}






/* exemple
List inverse(List L) {
    List x, z, N = L;
    int count = 0;
    
    while(L) {
        count++;
        x = z = L;
        L = L->next;
    }
    L = N;

    for(int i = 1; i < (count - 1); i++) {
        for(int j = 0; j < ((count - i) - 1); j++) {
            x->next = L->next;
            L = L->next;
        }
        x = x->next;
        L = N;
    }
    x->next = N;
    x = x->next;
    x->next = NULL;
    
    return z;
}
*/