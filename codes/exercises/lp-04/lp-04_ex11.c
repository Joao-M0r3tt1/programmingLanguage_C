/*
en-US: EXERCISE_11.C - Exercise 11. Static variable behavior
- Statement: change the class of variable n from auto to static in the source code 'exampleCodes/lp-04/lp-04_ex15.c', run the program and analyze the result
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_11.C - Exercicio 11. Comportamento de variável estática
- Enunciado: altere a classe da variavel n de auto para static no código fonte 'exampleCodes/lp-04/lp-04_ex15.c', execute o programa e analise o resultado
*/

#include <stdio.h>
#include <conio.h>
#include <time.h>

void sequence(void) {
    static int n = 0;
    printf("%d, ",n++);
}

int main(void) {
    while(!_kbhit()) {
        sequence();
        _sleep(1);
    }
    
    return 0;
}