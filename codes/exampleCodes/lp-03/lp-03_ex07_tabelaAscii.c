/* TABELAASCII.C - Tabela ASCII*/

#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>   para o clrscr()

int main(void) {
    for (int c = 0; c <= 255; c++) {
        printf("%3d => %c\n", c, c);
        if (c%16 == 15) {
            printf("\nPressione enter...");
            _getch();
            _clrscr();
        }
    }
    return 0;
}
