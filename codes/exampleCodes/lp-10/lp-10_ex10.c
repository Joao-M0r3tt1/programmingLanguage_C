/*
en-US: EXAMPLE_10.C - Example 10. Function that returns pointer
- Statement: Given a character d and a string e, returns the address of the first occurrence of c in s
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_10.C - Exemplo 10. Função que devolve ponteiro
- Enunciado: Dados um caractere c e uma string s, devolva o endereço da primeira ocorrência de c em s
*/

#include <stdio.h>

char *pos(char c, char *s) {
    while(*s && *s != c) s++;
    return (*s ? s : NULL);
}

int main(void) {
    char *s = "banana";

    printf("Vector address: %p\n", s);
    printf("Position of the letter n: %p\n", pos('n', s));
    printf("Position of the letter x: %p\n", pos('x', s));

    return 0;
}