/*
en-US: EXERCISE_06.C - Exercise 06. Book registration
- Statement: create a program that uses the Book type (which stores the title, author and year of publication of a book) to represent and display the following table
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_06.C - Exercicio 06. Cadastro de livros
- Enunciado: crie um programa que usa o tipo Livro (que guarda o título, o autor e o ano de publicação de um livro) para representar e exibir a tabela a seguir
*/

#include <stdio.h>

typedef struct {
    char title[15];
    char author[20];
    int yearPublication;
} Book;

void displayTab(Book w[], int n) {
    for(int i = 0; i < n; i++)
        printf("- {%s, %s, %d}\n", w[i].title, w[i].author, w[i].yearPublication);
}

int main(void) {
    Book v[] = {{"Frankenstein", "Mary Shelley", 1818},
                {"Dracula", "Bram Stoker", 1897},
                {"Carmilla", "Sheridan Le Fanu", 1872},
                {"Varney", "Thomas Prest", 1847}};
    
    displayTab(v, 4);

    return 0;
}