/*
en-US: EXAMPLE_05.C - Example 05. Node creation
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_05.C - Exemplo 05. Criação de nó
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-11.pdf
*/

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