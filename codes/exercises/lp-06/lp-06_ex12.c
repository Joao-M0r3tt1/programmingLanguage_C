/*
en-US: EXERCISE_12.C - Exercise 12. Tic-tac-toe: "smart" program
- Statement: complete the lp-06_ex10.c source file by changing the computer() function, according to the lp-06_ex11.c source file
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_12.C - Exercicio 12. Jogo da velha: programa 'inteligente'
- Enunciado: complete o arquivo fonte lp-06_ex10.c alterando a função computador(), conforme o arquivo fonte lp-06_ex11.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define equals(a, b, c) ((a != ' ') && (a == b) && (b == c))
#define attack(a, b, c) ((a == ' ' && b == 'o' && c == 'o') || (b == ' ' && a == 'o' && c == 'o') || (c == ' ' && a == 'o' && b == 'o'))
#define defend(a, b, c) ((a == ' ' && b == 'x' && c == 'x') || (b == ' ' && a == 'x' && c == 'x') || (c == ' ' && a == 'x' && b == 'x'))

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

int complete(char m[3][3], char c) {
    if(c == 'o') {
        for(int i = 0; i < 3; i++) {
            if(attack(m[i][0], m[i][1], m[i][2])) {
                if(m[i][0] == ' ') m[i][0] = c;
                if(m[i][1] == ' ') m[i][1] = c;
                if(m[i][2] == ' ') m[i][2] = c;
                return 1;
            } 
            if(attack(m[0][i], m[1][i], m[2][i])) {
                if(m[0][i] == ' ') m[0][i] = c;
                if(m[1][i] == ' ') m[1][i] = c;
                if(m[2][i] == ' ') m[2][i] = c;
                return 1;
            }
        }
        if(attack(m[0][0], m[1][1], m[2][2])) {
            if(m[0][0] == ' ') m[0][0] = c;
            if(m[1][1] == ' ') m[1][1] = c;
            if(m[2][2] == ' ') m[2][2] = c;
            return 1;
        }
        if(attack(m[0][2], m[1][1], m[2][0])) {
            if(m[0][2] == ' ') m[0][2] = c;
            if(m[1][1] == ' ') m[1][1] = c;
            if(m[2][0] == ' ') m[2][0] = c;
            return 1;
        }
        
        return 0;
    } else {
        c = 'o';
        for(int i = 0; i < 3; i++) {
            if(defend(m[i][0], m[i][1], m[i][2])) {
                if(m[i][0] == ' ') m[i][0] = c;
                if(m[i][1] == ' ') m[i][1] = c;
                if(m[i][2] == ' ') m[i][2] = c;
                return 1;
            } 
            if(defend(m[0][i], m[1][i], m[2][i])) {
                if(m[0][i] == ' ') m[0][i] = c;
                if(m[1][i] == ' ') m[1][i] = c;
                if(m[2][i] == ' ') m[2][i] = c;
                return 1;
            }
        }
        if(defend(m[0][0], m[1][1], m[2][2])) {
            if(m[0][0] == ' ') m[0][0] = c;
            if(m[1][1] == ' ') m[1][1] = c;
            if(m[2][2] == ' ') m[2][2] = c;
            return 1;
        }
        if(defend(m[0][2], m[1][1], m[2][0])) {
            if(m[0][2] == ' ') m[0][2] = c;
            if(m[1][1] == ' ') m[1][1] = c;
            if(m[2][0] == ' ') m[2][0] = c;
            return 1;
        }
        
        return 0;
    }
}

void computer(char m[3][3]) {
    int x, y, i = 0;
    char c;
    srand(time(NULL));

    if(!complete(m, 'o'))
        if(!complete(m, 'x')) {
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
}

char winner(char m[3][3]) {
    for(int i = 0; i < 3; i++) {
        if(equals(m[i][0], m[i][1], m[i][2])) return m[i][0];
        if(equals(m[0][i], m[1][i], m[2][i])) return m[0][i];
    }
    if(equals(m[0][0], m[1][1], m[2][2])) return m[0][0];
    if(equals(m[0][2], m[1][1], m[2][0])) return m[0][2];
    return ' ';
}

int main(void) {
    char matrix[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int choice, drawn, count = 0;
    char w;
    srand(time(NULL));

    printf("Pair (0) or odd (1)? ");
    scanf("%d", &choice);

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