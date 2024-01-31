/*
en-US: EXAMPLE_08.C - Example 08. Two-dimensional array initiation
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_08.C - Exemplo 08. Iniciação de matriz bidimensional
*/

#include <stdio.h>

int main(void) {
    int matrix[6] [7] = { {1, 1, 1, 1, 1, 1, 1},
                          {0, 0, 1, 0, 0, 0, 1},
                          {1, 0, 0, 0, 1, 1, 1},
                          {1, 0, 1, 0, 1, 0, 0},
                          {1, 0, 1, 0, 0, 0, 1},
                          {1, 1, 1, 1, 1, 1, 1}};
    
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 7; j++) 
            printf("%s", matrix[i] [j] ? "\xDB\xDB" : "  ");
        puts("");
    }

    return 0;
}