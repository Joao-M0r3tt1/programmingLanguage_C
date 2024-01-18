/* JOGOADIVINHACAO.C - Jogo de adivinhação */

/* Enunciado: Sortear um número e verificar se o usuário consegue descobrir qual foi o número sorteado */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int c, n = rand() % 7 + 1;

    do {
        printf("Chute entre 1 e 7: ");
        scanf("%d", &c);

        if(c > n) puts("Muito alto!");
        else if( c < n) puts("Muito baixo!");
        else puts("Voce acertou!");
    } while (n != c);

    return 0;
}