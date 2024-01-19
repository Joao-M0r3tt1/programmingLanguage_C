/*
en-US: EXAMPLE_08.C - Example 08. Chessboard
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_08.C - Exemplo 08. Tabuleiro de xadrez
*/

#include <stdio.h>
#include <conio.h>

int main(void) {
    int n;

    printf("Size? ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            _textcolor((i + j) % 2 == 0 ? 8 : 15);
            printf("%c%c", 219, 219);
        }
        putchar('\n');
    }

    return 0;
}
