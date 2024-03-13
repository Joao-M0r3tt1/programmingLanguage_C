/*
en-US: EXERCISE_20.C - Exercise 20. Occurs
- Statement: Create the recursive function count(x, L), which tells you how many times item x occurs in list L
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_20.C - Exercicio 20. Contagem 
- Enunciado: Crie a função recursiva count(x, L), que informa quantas vezes o item x ocorre na lista L
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

int count(int x, List L) {
    if(!L) return 0;
    if(x == L->data) return 1 + count(x, L->next);
    
    return 0 + count(x, L->next);
}

int main(void) {
    List I = node(5, node(2, node(7, NULL)));
    int number = 5;

    printf("Occurence of number %d is: %d times", number, count(number, I));

    return 0;
}