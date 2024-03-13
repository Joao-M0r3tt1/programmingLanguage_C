/*
en-US: EXERCISE_03.C - Exercise 03. Another way of display
- Statement: Change the display() function in the lp-11_ex02.c source code so that the list items are displayed in square brackets and separated by commas. The empty list should be displayed as []. For example, after changing the display() function, executing the code should produce the output: [3, 1, 5]
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_03.C - Exercicio 03. Outra forma de exibição
- Enunciado: Altere a função exibe() do código fonte lp-11_ex02.c, de modo que os itens da lista sejam exibidos entre colchetes e separados pro vírgulas. A lista vazia deve ser exibida como []. Por exemplo, após a alteração da função exibe(), a execução do código deve produzir a saída: [3, 1, 5]
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

void display(List L) {
    printf("[");

    while(L != NULL) {
        printf("%d", L->item);
        L = L->next;
        if(L != NULL) printf(",");
    }

    printf("]");
}

int main(void) {
    List I = node(3, node(1, node(5, NULL)));

    display(I);

    return 0;
}