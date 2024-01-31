/*
en-US: EXERCISE_06.C - Exercise 06. Exit from the maze
- Statement: the function exit(m, i, j) finds a path to the exit of the maze given by the square matrix m, of order MAX, starting from the point (i, j). Create a program to generate and display a random maze and then find a path from its entrance to its exit
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_06.C - Exercicio 06. Saída do labirinto
- Enunciado: a função sai(m, i, j) encontra um caminho para a saída do labirinto dado pela matriz quadrada m, de ordem MAX, a partir do ponto (i, j). Crie um programa para gerar e exibir um labirinto aleatório e, depois, encontrar um caminho que leve de sua entrada até sua saída
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define MAX 10

void show(char c, int i, int j) {
    _gotoxy(2 * j + 1, i + 1);
    printf("%c%c\b", c, c);
    _sleep(1);
}

int exit_func(int w[MAX][MAX], int i, int j) {
    w[i][j] = 2;
    
    show('\xB0', i, j);
    if(i == MAX - 2 && j == MAX - 1) return 1;
    if(w[i + 1][j] == 0 && exit_func(w, i + 1, j)) return 1;
    if(w[i][j + 1] == 0 && exit_func(w, i, j + 1)) return 1;
    if(w[i - 1][j] == 0 && exit_func(w, i - 1, j)) return 1;
    if(j > 0 && w[i][j - 1] == 0 && exit_func(w, i, j - 1)) return 1;
    show('  ', i, j);

    return 0;
}

void generates(int w[MAX] [MAX]) {
    int random;
    srand(time(NULL));

    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX; j++)
            if((i == 1 && j == 0) || (i == MAX - 2 && j == MAX - 1)) w[i] [j] = 0;
            else if(((i == 0 || i == MAX - 1) && (j%2 == 0 || j%2 == 1)) || ((j == 0 || j == MAX - 1) && (i%2 == 0 || i%2 == 1))) w[i] [j] = 1; // Optional: leave the four edges of the maze with barriers
            else {
                // Generates a random number between 0 and 3, i.e. 25% probability for obstacles
                random = rand() % 4;
                w[i] [j] = (random == 0) ? 1 : 0;
            } 
    }
}

void display(int w[MAX] [MAX]) {
    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX; j++) printf("%s", w[i] [j] ? "\xDB\xDB" : "  ");
        puts("");
    }
}

int main(void) {
    int matrix[MAX] [MAX];

    generates(matrix);
    display(matrix);
    printf("\n\n\n%s\n", exit_func(matrix, 1, 0) ? "Exit found!" : "\n\n\n\n\n\n\nExit not found!");

    return 0;
}
