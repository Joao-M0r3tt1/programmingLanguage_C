/* COMANDODOWHILE.C - O camando do-while */

/* Enunciado: exibir a soma de uma sequência de números terminada com 0 */

#include <stdio.h>

int main(void) {
    int s = 0, n;

    do {
        printf("Numero? ");
        scanf("%d", &n);
        s += n;
    } while(n != 0);

    printf("Soma = %d\n", s);

    return 0;
}