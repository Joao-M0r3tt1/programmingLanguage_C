/*
en-US: EXERCISE_05.C - Exercise 05. Maze Generation
- Statement: create the function generate(m), which generates a random maze in a square matrix m, of order MAX. The entrance and exit of the maze must be at positions (1, 0) and (MAX-2, MAX-1), respectively. Furthermore, the expected density of obstructed positions in the maze should be 25%
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_05.C - Exercicio 05. Geração de labirinto
- Enunciado: crie a função gera(m), que gera um labirinto aleatório numa matriz quadrada m, de ordem MAX. A entrada e a saída do labirinto devem estar nas posições (1, 0) e (MAX-2, MAX-1), respectivamente. Ademais, a densidade esperada de posições obstruídas no labirinto deve ser de 25%
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 15

void generates(int w[MAX] [MAX]) {
    int random;

    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX; j++)
            if((i == 1 && j == 0) || (i == MAX - 2 && j == MAX - 1)) w[i] [j] = 0;
            else if(((i == 0 || i == MAX - 1) && (j%2 == 0 || j%2 == 1)) || ((j == 0 || j == MAX - 1) && (i%2 == 0 || i%2 == 1))) w[i] [j] = 1; 
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
    srand(time(NULL));

    generates(matrix);
    display(matrix);

    return 0;
}