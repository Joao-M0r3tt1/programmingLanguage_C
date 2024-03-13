/*
en-US: EXAMPLE_04.C - Example 04. The List type
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_04.C - Exemplo 04. O tipo Lista
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-11.pdf
*/

typedef int Item;

typedef struct node {
    Item item;
    struct node *next;
} *List;