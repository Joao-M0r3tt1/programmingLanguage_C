/*
en-US: EXAMPLE_10.C - Example 10. Traces
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_10.C - Exemplo 10. Rastros
*/

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    int col = 40, lin = 12;

    while(1) {
        _gotoxy(col, lin);
        _putch(95);
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
        case 'F':
            exit(0);
        }
    }

    return 0;
}