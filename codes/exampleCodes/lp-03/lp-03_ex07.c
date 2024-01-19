/*
en-US: EXAMPLE_07.C - Example 07. ASCII table 
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_07.C - Exemplo 07. Tabela ASCII
*/

#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>   for the clrscr()

int main(void) {
    for (int c = 0; c <= 255; c++) {
        printf("%3d => %c\n", c, c);
        if (c%16 == 15) {
            printf("\nPress enter...");
            _getch();
            _clrscr();
        }
    }
    return 0;
}
