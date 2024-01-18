/* CONSISTENCIAENTRADA.C - Exercicio 12. Consistência de entrada */

/* Enunciado: dado um número real não negativo, informe a sua raiz quadrada. O programa deve rejeitar a entrada, enquanto não for digitado um número real não negativo */

#include <stdio.h>
#include <math.h>

int main(void) {
    float n;

    do {
        printf("Numero? ");
        scanf("%f", &n);
    } while( n < 0);
    printf("Raiz de %.2f: %.2f\n", n, sqrt(n));
    
    return 0;
}