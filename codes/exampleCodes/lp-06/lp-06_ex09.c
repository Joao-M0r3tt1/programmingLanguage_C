/*
en-US: EXAMPLE_09.C - Example 09. Tic-tac-toe: board display
- Statement: The function display(m) displays a tic-tac-toe board, given by the square matrix m, of order 3. In this matrix, each position can have one of three characters: x, o or blank space.
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_09.C - Exemplo 09. Jogo da velha: exibição do tabuleiro
- Enunciado: A função exibe(m) exibe um tabuleiro de jogo da velha, dado pela matriz quadrada m, de ordem 3. Nessa matriz, cada posição pode ter um de três caracteres: x, o ou espaço em branco.
*/

#include <stdio.h>
#include <conio.h>

void display(char m[3][3]) {
    _clrscr();
    for(int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", m[i][0], m[i][1], m[i][2]);
        if(i < 2) puts("---+---+---");
    }
}

int main(void) {
    char matrix[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

    display(matrix);

    return 0;
}