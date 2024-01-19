/*
en-US: EXERCISE_12.C - Exercise 12. Input Consistency
- Statement: given a non-negative real number, state its square root. The program should reject the input until a non-negative real number is entered
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_12.C - Exercicio 12. Consistência de entrada
- Enunciado: dado um número real não negativo, informe a sua raiz quadrada. O programa deve rejeitar a entrada, enquanto não for digitado um número real não negativo
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    float n;

    do {
        printf("Number? ");
        scanf("%f", &n);
    } while( n < 0);
    printf("Square root of %.2f: %.2f\n", n, sqrt(n));
    
    return 0;
}