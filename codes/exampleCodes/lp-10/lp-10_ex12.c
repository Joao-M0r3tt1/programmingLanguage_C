/*
en-US: EXAMPLE_12.C - Example 12. Pointer to structure
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_12.C - Exemplo 12. Ponteiro para estrutura
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-10.pdf
*/

#include <stdio.h>

typedef struct { int x; int y; } Point;

void move(Point *q, int dx, int dy) {
    (*q) .x += dx;
    (*q).y += dy;
}

int main(void) {
    Point p = {30, 44};

    move(&p, 1, -4);
    printf("Position: %d, %d\n", p.x, p.y);

    return 0;
}