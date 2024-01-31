/*
en-US: EXERCISE_10.C - Exercise 10. Tic-tac-toe: main program
- Statement: Complete the following program, run it and test its operation
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_10.C - Exercicio 10. Jogo da velha: programa principal
- Enunciado: complete o programa a seguir, execute-o e teste seu funcionamento
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define equals(a, b, c) ((a != ' ') && (a == b) && (b == c))

char winner(char m[3][3]) {
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

void user(char m[3][3]) {
    int x, y, i = 0;

    do {
        puts("\nYour time");
        printf("(x,y) - position? ");
        scanf("%d,%d", &x, &y);

        if(!((x >= 0 && x < 3) && (y >= 0 && y < 3))) puts("\nInvalid position!");
        else if(m[x][y] != ' ') puts("\nLocation already filled! Choose another...");
        else {
            m[x][y] = 'x';
            i = 1;
        } 
    } while(!i);
}

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

int main(void) {
    char matrix[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int choice, drawn, count = 0;
    char w;

    printf("Pair (0) or odd (1)? ");
    scanf("%d", &choice);

    srand(time(NULL));
    drawn = rand() % 2;
    printf("Drawn: %d\n\n", drawn);

    if(choice == drawn) puts("You start!");
    else puts("I start!");

    printf("Press enter...");
    _getch();

    do {
        display(matrix);
        if(choice == drawn) user(matrix);
        else {
            puts("\nMy turn!");
            puts("I'm thinking...");
            _sleep(2);
            computer(matrix);
        } 

        w = winner(matrix);
        drawn = !drawn;
    } while(++count < 9 && w == ' ');

    display(matrix);
    switch(w) {
        case ' ': puts("\nA tie!\n"); break;
        case 'x': puts("\nYou won!\n"); break;
        case 'o': puts("\nI won!\n"); break;
    }

    return 0;
}
