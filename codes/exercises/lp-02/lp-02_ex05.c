/* MAIORENTREDOISNUMEROS.C - Exrcício 5. Maior entre dois números */

/* Enunciado: Dados dois números distintos, informe qual deles é o maior */

#include <stdio.h>

int main(void) {
    int n1, n2;

    printf("Numeros? ");
    scanf("%d %d", &n1, &n2);
    if(n1 > n2) printf("%d e o maior numero", n1);
    else printf("%d e o maior numero", n2);

    return 0;
}