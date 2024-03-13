/*
en-US: EXAMPLE_06.C - Example 06. List creation
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_06.C - Exemplo 06. Criação de lista
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-11.pdf
*/

#include <stdio.h>

typedef int Item;
typedef struct node {
    Item item;
    struct node *next;
} *List;

List node(Item, List);  // function declaration

int main(void) {
    List I = node(3, node(1, node(5, NULL)));

    return 0;
}