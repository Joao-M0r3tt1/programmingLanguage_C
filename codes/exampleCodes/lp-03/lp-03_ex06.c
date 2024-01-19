/*
en-US: EXAMPLE_06.C - Example 06. multiplication table 
- Statement: given a number n (between 1 and 10), display its multiplication table
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_06.C - Exemplo 06. Tabuada
- Enunciado: dado um número n (entre 1 e 10), exiba a sua tabuada
*/

#include <stdio.h>

int main(void) {
    int n; 

    printf("Number? ");
    scanf("%d", &n);

    for(int i = 0; i <= 10; i++)
        printf("%d x %2d = %3d\n", n, i, n * i);

    return 0;
}