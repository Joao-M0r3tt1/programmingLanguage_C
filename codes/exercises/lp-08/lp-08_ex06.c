/*
en-US: EXERCISE_06.C - Exercise 06. Capitalization conversion
- Statement: create the function upr(s), which converts the string s to uppercase. Use toupper() from ctype.h
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_06.C - Exercicio 06. Conversão para maiúscula
- Enunciado: crie a função upr(s), que converte a string s em maiúscula. Use toupper() de ctype.h
*/

#include <stdio.h>
#include <ctype.h>

void upr(char s[]) {
    int i = 0;

    while(s[i]) {
        s[i] = toupper(s[i]);
        i++;
    } 
}

int main(void) {
    char v[10] = "Test";

    upr(v);
    puts(v);    // TEST

    return 0;
}

// another example without using the toupper() function in ctype.h
#include <stdio.h>

void upr(char s[]) {
    int i = 0, aux;

    while(s[i]) {
        if(s[i] >= 65 && s[i] <= 90);
        else {
            s[i] = (s[i] - 32);
        } 
        i++;
    } 
}

int main(void) {
    char v[10] = "Test";

    upr(v);
    puts(v);    // TEST

    return 0;
}