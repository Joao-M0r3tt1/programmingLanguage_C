/*
en-US: EXERCISE_19.C - Exercise 19. Equality
- Statement: Create the recursive function equal(A, B), which checks whether lists A and B are equal
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_19.C - Exercicio 19. Igualdade 
- Enunciado: Crie a função recursiva equal(A, B), que verifica se as listas A e B são iguais
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

bool equal(List A, List B) {
    if(!A && !B) return true;
    if((!A || !B) || (A->data != B->data)) return false;
    
    return equal(A->next, B->next);
}

int main(void) {
    List I = node(5, node(2, node(7, NULL)));
    List L = node(5, node(2, node(7, NULL)));

    printf("Equal lists: %s", equal(I, L) ? "Yes" : "No");

    return 0;
}