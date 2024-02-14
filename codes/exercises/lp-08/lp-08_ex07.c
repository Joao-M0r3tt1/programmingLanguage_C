/*
en-US: EXERCISE_07.C - Exercise 07. Integer value of a string
- Statement: create the function val(s), which returns the numeric value of a string containing only digits
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_07.C - Exercicio 07. Valor inteiro de uma string
- Enunciado: crie a função val(s), que devolve o valor numérico de uma string s contendo apenas dígitos
*/

#include <stdio.h>

int val(char s[]) {
    int i = 0, n;

    while(s[i]) {
        n = (n * 10) + (s[i] - '0');
        i++;
    }
    return n;
}

int main(void) {
    char v[] = "351";

    printf("Value: %d\n", 2 * val(v));  // 702

    return 0;
}