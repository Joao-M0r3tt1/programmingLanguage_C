/*
en-US: EXAMPLE_08.C - Example 08. String comparison
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_08.C - Exemplo 08. Comparação de strings
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-08.pdf
*/

#include <stdio.h>

int cmp(char s[], char t[]) {
    int i = 0;

    while(s[i] == t[i] && s[i]) i++;

    return s[i] - t[i];
}

int main(void) {
    char v[5] = "year";
    char w[5] = "dwarf";

    puts(cmp(v, w) > 0 ? "Bigger" : "Smaller");

    return 0;
}