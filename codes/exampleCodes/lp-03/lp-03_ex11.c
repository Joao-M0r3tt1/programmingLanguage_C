/*
en-US: EXAMPLE_11.C - Example 11. The do-while command
- Statement: display the sum of a sequence of numbers ending with 0
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_11.C - Exemplo 11. O comando do-while
- Enunciado: exibir a soma de uma sequência de números terminada com 0
*/

#include <stdio.h>

int main(void) {
    int s = 0, n;

    do {
        printf("Number? ");
        scanf("%d", &n);
        s += n;
    } while(n != 0);

    printf("Sum = %d\n", s);

    return 0;
}