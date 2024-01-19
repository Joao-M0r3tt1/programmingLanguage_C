/*
en-US: EXERCISE_10.C - Exercise 10. Ping-pong
- Statement: change the ping-pong program so that the color of the trail changes randomly each time the direction of movement of the ball is modified. Use random numbers
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_10.C - Exercicio 10. Pingue-pongue
- Enunciado: altere o programa do pingue-pongue, de modo que a cor do rastro mude aleatoriamente cada vez que a direção do movimento da bolinha for modificada. Use números aleatórios
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int x = 1, y = 1, dx = -1, dy = -1;

    do {
        _gotoxy(x, y);
        printf("O\b");
        _sleep(1);  // pause in seconds
        printf(".");
        if(x == 1 || x == 80) {
            dx = -dx;
            _textcolor(rand() % 16);
        }
        if(y == 1 || y == 24) {
            dy = -dy;
            _textcolor(rand() % 16);
        }
        x += dx;
        y += dy;
    } while(!_kbhit());

    return 0;
}
