/*
en-US: EXERCISE_01.C - Exercise 01. Error
- Statement: What is the error in the following program?
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_01.C - Exercicio 01. Erro
- Enunciado: Qual o erro no programa a seguir?
*/

#include <stdio.h> 

int main(void) {
    /* printf("%d\n", 0678); */   // error
    printf("%d\n", 067);   // correct

    return 0;
}

/* Identifies that the value '0678' would be an octal, but it is an invalid octal - Displays the error: invalid octal digit */