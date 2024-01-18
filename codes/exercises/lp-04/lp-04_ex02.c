/*
en-US: EXERCISE_02.C - Exercise 02. Lower and upper limits
- Statement: add the #define directives necessary to compile the following program
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_02.C - Exercicio 02. Limites inferior e superior
- Enunciado: adicione as diretivas #define necessárias para a compilação do programa a seguir
*/

#include <stdio.h>
#define MIN_INT 0
#define MAX_INT 10

int main(void) {
    printf("Minimum integer = %+d\n", MIN_INT);
    printf("Maximum integer = %+d\n", MAX_INT);

    return 0;
}