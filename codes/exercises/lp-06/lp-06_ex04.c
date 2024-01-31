/*
en-US: EXERCISE_04.C - Exercise 04. Maze Display
- Statement: create the function displays(m), which displays the maze given by the square matrix m, of order MAX
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_04.C - Exercicio 04. Exibição de labirinto
- Enunciado: crie a função exibe(m), que exibe o labirinto dado pela matriz quadrada m, de ordem MAX
*/

#include <stdio.h>
#define MAX 8

void display(int w[MAX] [MAX]) {
    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX; j++) printf("%s", w[i] [j] ? "\xDB\xDB" : "  ");
        puts("");
    }
}

int main(void) {
    int matrix[MAX] [MAX] = {{1, 1, 1, 1, 1, 1, 1, 1},
                             {0, 0, 1, 0, 0, 0, 0, 1},
                             {1, 0, 1, 0, 1, 0, 1, 1},
                             {1, 0, 1, 0, 1, 0, 0, 1},
                             {1, 0, 0, 0, 1, 1, 0, 1},
                             {1, 0, 1, 0, 0, 1, 0, 1},
                             {1, 0, 1, 0, 1, 1, 0, 0},
                             {1, 1, 1, 1, 1, 1, 1, 1}};
    display(matrix);

    return 0;
}