/*
en-US: EXAMPLE_09.C - Example 09. Effect of break on switch case
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_09.C - Exemplo 09. Efeito do break num switch-case
*/

#include <stdio.h>

int main(void) {
    int n;

    printf("Number? ");
    scanf("%d", &n);

    switch (n) {
    case 1:
        putchar('A');
        break;
    case 3:
        putchar('B');
    case 4:
        putchar('C');
        break;
    default:
        putchar('*');
    case 5: 
        putchar('D');
    }
    puts(".");

    return 0;
}