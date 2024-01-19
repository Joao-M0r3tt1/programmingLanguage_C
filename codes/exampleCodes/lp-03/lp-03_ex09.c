/*
en-US: EXAMPLE_09.C - Example 09. The while command
- Statement: given a positive number, display its digits
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_09.C - Exemplo 09. O comando while
- Enunciado: dado um número positivo, exiba os seus dígitos
*/

#include <stdio.h>

int main(void) {
    int n;

    printf("Number? ");
    scanf("%d", &n);

    while(n > 0) {
        printf("%d\n", n % 10);
        n /= 10;
    }

    return 0;
}