/*
en-US: EXAMPLE_02.C - Example 02. Pair numbers 
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_02.C - Exemplo 02. Números pares
*/

#include <stdio.h>
#define pair(n) ((n) % 2 == 0)

int main(void) {
    int a;

    printf("Number? ");
    scanf("%d", &a);
    
    puts(pair(a) ? "Pair" : "Odd");

    return 0;
}