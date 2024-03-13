/*
en-US: EXAMPLE_07.C - Example 07. List view
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_07.C - Exemplo 07. Exibição de lista
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-11.pdf
*/

#include <stdio.h>

typedef int Item;
typedef struct node {
    Item item;
    struct node *next;
} *List;

void display(List L) {
    while(L != NULL) {
        printf("%d\n", L->item);
        L = L->next;
    }
}