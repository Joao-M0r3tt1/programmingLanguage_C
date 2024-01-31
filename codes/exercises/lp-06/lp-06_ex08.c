/*
en-US: EXERCISE_08.C - Exercise 08. Tic-tac-toe: user move
- Statement: create the function user(m), which prompts the user for the desired position for their move (until they provide a valid position) and fills this position in the matrix m with the character 'x'. Consider that a position is valid if and only if it exists in matrix m and is blank
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_08.C - Exercicio 08. Jogo da velha: jogada do usuário
- Enunciado: crie a função usuario(m), que slicita ao usuário a posição desejada para a sua jogada (até que ele informe uma posição válida) e preenche essa posição na matriz m com o caractere 'x'. Considere que uma posição é válida se e somente se ela existe na matriz m e está em branco
*/

#include <stdio.h>

void user(char m[3][3]) {
    int x, y, i = 0;

    do {
        printf("(x,y) - position? ");
        scanf("%d,%d", &x, &y);

        if(!((x >= 0 && x < 3) && (y >= 0 && y < 3))) puts("Posicao invalida!");
        else if(m[x][y] != ' ') puts("Local ja preenchido! Escolha outro...");
        else {
            m[x][y] = 'x';
            i = 1;
        } 
    } while(!i);
}