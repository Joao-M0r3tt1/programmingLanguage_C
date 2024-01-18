/* QUADRADOSPERFEITOS.C - Exercicio 3. Quadrados perfeitos */

/* Enunciado: o quadrado de um número natural n é igual à soma dos n primeiros ímpares consecutivos. Com base nessa ideia, crie um programa que dado um número natural n, calcula e exibe o quadrado de n 

Ex: 5^2 = 1 + 3 + 5 + 7 + 9 = 25
*/

#include <stdio.h>

int main(void) {
    int n, i, sum = 0;

    printf("Numero? ");
    scanf("%d", &n);

    for(i = 0; i <= (2 * n); i++)
        if(i % 2 != 0) 
            sum += i; 
    printf("Quadrado de %d e: %d\n", n, sum);

    return 0;
}