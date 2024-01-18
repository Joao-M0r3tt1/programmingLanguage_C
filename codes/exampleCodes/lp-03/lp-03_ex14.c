/* PRIMALIDADE.C - Primalidade */

/* Enunciado: Verificar se um dado número natural maior que 1 é primo */

#include <stdio.h>

int main(void) {
    int n, d;

    printf("Numero? ");
    scanf("%d", &n);

    for(d = 2; d <= n-1; d++) 
        if(n % d == 0) break;

    if(d == n) puts("E primo!");
    else puts("Nao e primo!");

    return 0;
}