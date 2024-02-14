/*
en-US: EXAMPLE_06.C - Example 06. Copying strings
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_06.C - Exemplo 06. Cópia de strings
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-08.pdf
*/

#include <stdio.h>

void cpy(char s[], char t[]) {
    int i = 0;

    while(s[i] = t[i]) i++;
}

int main(void) {
    char v[4] = "two";
    char w[4];

    cpy(w, v);
    puts(v);
    puts(w);

    return 0;
}