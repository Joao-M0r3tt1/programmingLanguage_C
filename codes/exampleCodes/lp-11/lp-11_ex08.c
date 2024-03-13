/*
en-US: EXAMPLE_08.C - Example 08. List size
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_08.C - Exemplo 08. Tamanho de lista
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-11.pdf
*/

typedef int Item;
typedef struct node {
    Item item;
    struct node *next;
} *List;

int size(List L) {
    int size_variable = 0;

    while(L) {
        size_variable++;
        L = L->next;
    }

    return size_variable;
}