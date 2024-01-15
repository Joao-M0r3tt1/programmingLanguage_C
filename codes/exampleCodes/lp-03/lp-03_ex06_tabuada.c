/* TABUADA.C - Tabuada*/

/* Enunciado: dado um número n (entre 1 e 10), exiba a sua tabuada. */

#include <stdio.h>

int main(void) {
    int n; 

    printf("Numero? ");
    scanf("%d", &n);

    for(int i = 0; i <= 10; i++)
        printf("%d x %2d = %3d\n", n, i, n * i);

    return 0;
}