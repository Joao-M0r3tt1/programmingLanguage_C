/*
en-US: EXAMPLE_13.C - Example 13. Ping-pong
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_13.C - Exemplo 13. Pingue-pongue
*/

#include <stdio.h>
#include <conio.h>
#include <time.h>

int main(void) {
    int x = 1, y = 1, dx = -1, dy = -1;

    do {
        _gotoxy(x, y);
        printf("O\b");
        _sleep(1);  // pause in seconds
        printf(".");
        if(x == 1 || x == 80) dx = -dx;
        if(y == 1 || y == 24) dy = -dy;
        x += dx;
        y += dy;
    } while(!_kbhit());

    return 0;
}
