/*
en-US: EXERCISE_07.C - Exercise 07. Tic-tac-toe: winner
- Statement: Complete the following program, run it and find out what the winner(s) function does
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_07.C - Exercicio 07. Jogo da velha: vencedor
- Enunciado: complete o programa a seguir, execute-o e descubra o que faz a função vencedor(m)
*/

#include <stdio.h>
#include <conio.h>
#define equals(a, b, c) (a != ' ' && a == b && b == c)

int winner(char m[3][3]) {
    for(int i = 0; i < 3; i++) {
        if(equals(m[i][0], m[i][1], m[i][2])) return m[i][0];
        if(equals(m[0][i], m[1][i], m[2][i])) return m[0][i];
    }
    if(equals(m[0][0], m[1][1], m[2][2])) return m[0][0];
    if(equals(m[0][2], m[1][1], m[2][0])) return m[0][2];
    return ' ';
}

void display(char m[3][3]) {
    _clrscr();
    for(int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", m[i][0], m[i][1], m[i][2]);
        if(i < 2) puts("---+---+---");
    }
}

int main(void) {
    char matrix[3][3] = {{'x', ' ', 'o'}, {' ', 'x', 'o'}, {' ', ' ', 'x'}};
    
    display(matrix);
    printf("\nVencedor: %c\n\n", winner(matrix));

    return 0;
}