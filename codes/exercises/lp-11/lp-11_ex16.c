/*
en-US: EXERCISE_16.C - Exercise 16. Nth
- Statement: Create the recursive function nth(n, L), which returns the nth (n >= 1) item from list L
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_16.C - Exercicio 16. Enésimo
- Enunciado: Crie a função recursiva nth(n, L), que devolve o enésimo (n >= 1) item da lista L
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

int nth(int n, List L) {
    if(!L || n < 1) {
        printf("Error: empty list.\n");
        exit(EXIT_FAILURE);
    }
    else if(n == 1) return L->data;
    else return nth(n--, L->next);
}

int main(void) {
    List I = node(1, node(2, node(3, NULL)));

    printf("Nth item on the list: %d", nth(2, I));

    return 0;
}