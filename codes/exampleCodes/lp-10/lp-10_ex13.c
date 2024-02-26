/*
en-US: EXAMPLE_13.C - Example 13. Use of the arrow operator
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_13.C - Exemplo 13. Uso do operador seta
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-10.pdf
*/

#include <stdio.h>

typedef struct { int x; int y; } Point;

void move(Point *q, int dx, int dy) {
    q->x += dx;
    q->y += dy;
}

int main(void) {
    Point p = {30, 44};

    move(&p, 1, -4);
    printf("Position: %d, %d\n", p.x, p.y);

    return 0;
}