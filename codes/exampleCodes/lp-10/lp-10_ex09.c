/*
en-US: EXAMPLE_09.C - Example 09. String traversal via pointer
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_09.C - Exemplo 09. Percurso de string via ponteiro
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-10.pdf
*/

#include <stdio.h>

void putstr(char *s) {
    while(*s) {
        putchar(*s);    // or putchar(*s++);
        s++;
    }
}

int main(void) {
    putstr("Hi!\n");    // this is in read-only storage, not the heap

    return 0;
}