/*
en-US: EXERCISE_01.C - Exercise 01. Playing programs in English - 1st version
- Statement: add the #define directives necessary to compile the following program
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_01.C - Exercicio 01. Brincando de programa em inglês - 1º versão
- Enunciado: adicione as diretivas #define necessárias para a compilação do programa a seguir
_____________________________________________________________________________________________________________________

Program/Programa: 
#include <stdio.h>

program
start
    say("Hi!");
end

*/

#include <stdio.h>
#define PROGRAM int main(void)
#define START { 
#define END }
#define SAY printf

PROGRAM 
START
    SAY("Hi!\n");
 
    return 0;
END