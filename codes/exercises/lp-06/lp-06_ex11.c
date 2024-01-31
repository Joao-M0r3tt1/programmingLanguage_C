/*
en-US: EXERCISE_11.C - Exercise 11. Tic-tac-toe: "smart" strategy
- Statement: The computer has a better chance of winning if it adopts the following rules, in this order:

     - Attack: if there are two 'o' aligned with a space, replace the space with 'o'
     - Defense: if there are two 'x' aligned with a space, replace the space with 'o'
     - Luck: Play a random position

Modify the computer() function for this strategy
     - To make things easier, create the complete function (m, c), which searches m for two characters equal to c aligned with a space and, if found, replaces the space with the character 'o' (the function must return an answer of 0 or 1, indicating whether or not you were able to replace a blank space in the array m with a character 'o')

     - The computer() function must call complete(m, 'o') to attack. If this call returns 0, the function must call complete(m, 'x') to defend. If the second call also returns 0, the function should play randomly
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_11.C - Exercicio 11. Jogo da velha: estratégia "inteligente"
- Enunciado: o computador tem mais chance de ganhar se adotar as seguintes regras, nessa ordem:

    - Ataque: se há dois 'o' alinhados com um espaço, substitua o espaço por 'o'
    - Defesa: se há dois 'x' alinhados com um espaço, substitua o espaço por 'o'
    - Sorte: Jogue numa posição aleatória

Modifique a função computador() para essa estratégia
    - Para facilitar, crie a função completa(m, c), que procura em m dois caracteres iguais a c alinhados com um espaço e, se encontrar, substitui o espaço pelo caractere 'o' (a função deve devolver uma resposta 0 ou 1, indicando se conseguiu ou não substituir um espaço em branco na matriz m por um caractere 'o')

    - A função computador() deve chamar completa(m, 'o') para atacar. Caso essa chamada devolva 0, a função deve chamar completa(m, 'x') para defender. Se a segunda chamada também devolver 0, a função deve jogar aleatoriamente
_____________________________________________________________________________________________________________________

Obs.: Note that it is possible to define even more "intelligent" strategies for the computer's play
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define attack(a, b, c) ((a == ' ' && b == 'o' && c == 'o') || (b == ' ' && a == 'o' && c == 'o') || (c == ' ' && a == 'o' && b == 'o'))
#define defend(a, b, c) ((a == ' ' && b == 'x' && c == 'x') || (b == ' ' && a == 'x' && c == 'x') || (c == ' ' && a == 'x' && b == 'x'))

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

int complete(char m[3][3], char c) {
    if(c == 'o') {
        for(int i = 0; i < 3; i++) {
            if(attack(m[i][0], m[i][1], m[i][2])) {
                if(!m[i][0]) m[i][0] = c;
                else if(!m[i][1]) m[i][1] = c;
                else m[i][2] = c;
                return 1;
            } 
            if(attack(m[0][i], m[1][i], m[2][i])) {
                if(!m[0][i]) m[0][i] = c;
                else if(!m[1][i]) m[1][i] = c;
                else m[2][i] = c;
                return 1;
            }
        }
        if(attack(m[0][0], m[1][1], m[2][2])) {
            if(!m[0][0]) m[0][0] = c;
            else if(!m[1][1]) m[1][1] = c;
            else m[2][2] = c;
            return 1;
        }
        if(attack(m[0][2], m[1][1], m[2][0])) {
            if(!m[0][2]) m[0][2] = c;
            else if(!m[1][1]) m[1][1] = c;
            else m[2][0] = c;
            return 1;
        }
        
        return 0;
    } else {
        c = 'o';
        for(int i = 0; i < 3; i++) {
            if(defend(m[i][0], m[i][1], m[i][2])) {
                if(!m[i][0]) m[i][0] = c;
                else if(!m[i][1]) m[i][1] = c;
                else m[i][2] = c;
                return 1;
            } 
            if(defend(m[0][i], m[1][i], m[2][i])) {
                if(!m[0][i]) m[0][i] = c;
                else if(!m[1][i]) m[1][i] = c;
                else m[2][i] = c;
                return 1;
            }
        }
        if(defend(m[0][0], m[1][1], m[2][2])) {
            if(!m[0][0]) m[0][0] = c;
            else if(!m[1][1]) m[1][1] = c;
            else m[2][2] = c;
            return 1;
        }
        if(defend(m[0][2], m[1][1], m[2][0])) {
            if(!m[0][2]) m[0][2] = c;
            else if(!m[1][1]) m[1][1] = c;
            else m[2][0] = c;
            return 1;
        }
        
        return 0;
    }
}