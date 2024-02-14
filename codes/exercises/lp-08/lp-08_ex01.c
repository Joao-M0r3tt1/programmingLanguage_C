/*
en-US: EXERCISE_01.C - Exercise 01. String comparison (case sensitive)
- Statement: using the strcmp() function, declared in string.h, make the necessary corrections so that the following program works correctly
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_01.C - Exercicio 01. Comparação de strings (sensível ao caso)
- Enunciado: usando a função strcmp(), declarada em string.h, faça as correções necessárias para que o programa a seguir funcione corretamente
_____________________________________________________________________________________________________________________

obs: this commented code is wrong, because if you are trying to compare the memory address of s, with the string "Abracadabra", this will always result in false

#include <stdio.h>

int main(void) {
    char s[513];

    printf("Password? ");
    gets(s);

    if(s == "Abracadabra") puts("Correct password!");
    else puts("Incorrect password!");

    return 0;
}

*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[513];

    printf("Password? ");
    gets(s);

    if(!strcmp(s, "Abracadabra")) puts("Correct password!");
    else puts("Incorrect password!");

    return 0;
}