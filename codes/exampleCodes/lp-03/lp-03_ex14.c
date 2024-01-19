/*
en-US: EXAMPLE_14.C - Example 14. Primality
- Statement: Check whether a given natural number greater than 1 is prime
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_14.C - Exemplo 14. Primalidade
- Enunciado: Verificar se um dado número natural maior que 1 é primo
*/

#include <stdio.h>

int main(void) {
    int n, d;

    printf("Number? ");
    scanf("%d", &n);

    for(d = 2; d <= n-1; d++) 
        if(n % d == 0) break;

    if(d == n) puts("Is cousin!");
    else puts("Not cousin!");

    return 0;
}