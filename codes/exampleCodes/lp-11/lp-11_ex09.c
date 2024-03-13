/*
en-US: EXAMPLE_09.C - Example 09. List destruction
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_09.C - Exemplo 09. Destruição de lista
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-11.pdf
*/

#include <stdlib.h>

typedef int Item;
typedef struct node {
    Item item;
    struct node *next;
} *List;

void destroy(List *L) {
    while(*L) {
        List n = *L;
        *L = n->next;
        free(n);
    }
}