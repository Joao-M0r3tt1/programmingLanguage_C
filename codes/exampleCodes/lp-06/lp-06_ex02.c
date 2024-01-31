/*
en-US: EXAMPLE_02.C - Example 02. sequence inversion
- Statement: given a sequence consisting of 5 integers, display it in reverse order
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_02.C - Exemplo 02. Inversão de sequência
- Enunciado: dada uma sequência composta por 5 números inteiros, exiba-a na ordem inversa
_____________________________________________________________________________________________________________________

ex.:
    vector: |17||29||30||42||55|
    index:   00  01  02  03  04
*/

#include <stdio.h>

int main(void) {
    int vector[5];

    for(int i = 0; i < 5; i++) {
        printf("%dº item? ", i+1);
        scanf("%d", &vector[i]);
    }

    puts("\nReverse order:");
    for(int i = 4; i >=0; i--)
        printf("%d\n", vector[i]);

    return 0;
}