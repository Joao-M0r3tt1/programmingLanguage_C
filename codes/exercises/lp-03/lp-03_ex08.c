/*
en-US: EXERCISE_08.C - Exercise 08. Trail
- Statement: add the following options to the program that draws tracks:

A: Enables/disables the trail (when disabled, the cursor must move without leaving a trace)
C: selects a new color for the trail (switching from one color to the next, cyclically)
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_08.C - Exercicio 08. Rastro
- Enunciado: adicione as seguintes opções no programa que desenha rastros:

R: ativa/desativa o rastro (quando desativado, o cursor deve se mover sem deixar rastros)
C: seleciona uma nova cor para o rastro (alternando de uma cor para a próxima, ciclicamente)
*/

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    int col = 40, lin = 12, character = 95, color = 15;

    while(1) {
        _gotoxy(col, lin);
        _putch(character);
        switch (toupper(_getch())) {
            case 'N':
                if(lin > 1) lin--;
                break;
            case 'S':
                if(lin < 24) lin++;
                break;
            case 'L':
                if(lin < 80) col++;
                break;
            case 'O':
                if(col > 1) col--;
                break;
            case 'R':
                if (character == 95)
                    character = 255;
                else character = 95;
                break;
            case 'C':
                if(color == 15) {
                    color = 0;
                    _textcolor(color);
                } else if(color == color) {
                    color += 1;
                    _textcolor(color);
                }
                break;
            case 'F':
                exit(0);
        }
    }

    return 0;
}
