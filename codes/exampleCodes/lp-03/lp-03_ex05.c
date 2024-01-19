/*
en-US: EXAMPLE_05.C - Example 05. The for command
- Statement: display a progressive count from 1 to 9
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_05.C - Exemplo 05. O comando for
- Enunciado: exibir uma contagem progressiva de 1 até 9
*/

#include <stdio.h>

int main(void) {
    int i; 

    for(i = 1; i <= 9; i++)
        printf("%d\n", i);

    return 0;
}