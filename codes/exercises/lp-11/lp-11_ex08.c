/*
en-US: EXERCISE_08.C - Exercise 08. List membership
- Statement: Create the function belongs(x, L), which checks whether item x is stored in list L. Then write a program to test this function
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_08.C - Exercicio 08. Pertinência em lista
- Enunciado: Crie a função pertence(x, L), que verifica se o item x está armazenado na lista L. Em seguida, faça um programa para testar essa função
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

void belongs(int x, List L) {
    int aux = 0;
    
    while(L) {
        if(x == L->item) {
            aux = 1;
            L = NULL;
        }
        else L = L->next;
    }
    (aux == 1) ? printf("%d belongs on the list\n", x) : printf("%d does not belong on the list", x);
}

int main(void) {
    List I = node(3, node(1, node(5, NULL)));
    int number;

    printf("Number? ");
    scanf("%d", &number);
    
    belongs(number, I);

    return 0;
}