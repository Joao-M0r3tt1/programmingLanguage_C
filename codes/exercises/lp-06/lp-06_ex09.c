/*
en-US: EXERCISE_09.C - Exercise 09. Tic-tac-toe: computer move
- Statement: create the function computer(m), which randomly chooses a valid position in the matrix m and fills it with the character 'o'. Use the srand() and rand() functions from stdlib.h to generate random numbers. Use the time() function from time.h to set the seed of the random number generator
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_09.C - Exercicio 09. Jogo da velha: jogada do computador
- Enunciado: crie a função computador(m), que escolhe aleatoriamente uma posição válida na matriz m e a preenche com o caractere 'o'. Use as funções srand() e rand(), de stdlib.h, para a geração de números aleatórios. Use a função time(), de time.h, para definir a semente do gerador de números aleatórios
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void computer(char m[3][3]) {
    int x, y, i = 0;
    srand(time(NULL));

    do {
        x = rand() % 3;
        y = rand() % 3;

        if(m[x][y] != ' ');
        else {
            m[x][y] = 'o';
            i = 1;
        } 
    } while(!i);
}