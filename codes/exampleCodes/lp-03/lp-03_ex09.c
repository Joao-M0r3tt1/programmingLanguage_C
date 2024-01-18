/* COMANDOWHILE.C - O comando while */

/* Enunciado: dado um número positivo, exiba os seus dígitos */

#include <stdio.h>

int main(void) {
    int n;

    printf("Numero? ");
    scanf("%d", &n);

    while(n > 0) {
        printf("%d\n", n % 10);
        n /= 10;
    }

    return 0;
}