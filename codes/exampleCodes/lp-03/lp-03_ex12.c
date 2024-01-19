/*
en-US: EXAMPLE_12.C - Example 12. Guessing game
- Statement: Draw a number and check if the user can find out which number was drawn
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_12.C - Exemplo 12. Jogo de adivinhação
- Enunciado: Sortear um número e verificar se o usuário consegue descobrir qual foi o número sorteado
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int c, n = rand() % 7 + 1;

    do {
        printf("Kick between 1 and 7: ");
        scanf("%d", &c);

        if(c > n) puts("Very high!");
        else if( c < n) puts("Very low!");
        else puts("You're right!");
    } while (n != c);

    return 0;
}