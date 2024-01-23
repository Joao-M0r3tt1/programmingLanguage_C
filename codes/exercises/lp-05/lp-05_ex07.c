/*
en-US: EXERCISE_07.C - Exercise 07. Conversion to binary
- Statement: create the recursive function binary(n), which displays a natural n >= 0 in binary
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_07.C - Exercicio 07. Conversão em binário
- Enunciado: crie a função recursiva binario(n), que exibe um natural n >= 0 em binário 
_____________________________________________________________________________________________________________________

particular case:
binary(13) ----------> 1101
    |                   |  
    |                   | printf("%d", 13%2)  
    |                   |
binary(6) ----------> 110  

general case:
binary(n) ----------> binary(n%2)
    |                      |  
    |                      | printf("%d", 13%2)  
    |                      |
binary(n%2) ----------> binary(n%2) 
*/

#include <stdio.h>

void binary(int n) {
    if(n < 2) printf("%d", n);
    else {
        binary(n / 2);
        printf("%d", n % 2);
    }
}

int main(void) {
    int n;

    printf("Number? ");
    scanf("%d", &n);

    binary(n);

    return 0;
}