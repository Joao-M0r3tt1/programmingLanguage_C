/*
en-US: EXERCISE_12.C - Exercise 12. More random numbers
- Statement: the time() function, declared in time.h, when called with a NULL parameter, returns the number of seconds that have passed since midnight (00:00:00) on 01/01/1970

Change the pnr() function in the exampleCodes/lp-04/lp-04_ex16.c file to:
Create variable s with initial value equal to 0
Assign the value time(NULL) % 1000 to variable s, while its current value is equal to 0
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_12.C - Exercicio 12. Números mais aleatórios
- Enunciado: a função time(), declarada em time.h, quando chamada com parâmetro NULL, devolve o número de segundos que se passaram desde a meia noite (00:00:00) do dia 01/01/1970 

Altere a função npa() que está no arquivo exampleCodes/lp-04/lp-04_ex16.c para: 
Criar a variável s com valor inicial igual a 0
Atribuir o valor time(NULL) % 1000 à variável s, enqunato seu valor corrente for igual a 0
_____________________________________________________________________________________________________________________

obs: pnr = Pseudorandom numbers | npa = Números pseudoaleatórios
*/

#include <stdio.h>
#include <conio.h>
#include <time.h>

int pnr(void) {
    static unsigned s = 0;
    auto unsigned n = s % 100;

    do {
        s = time(NULL) % 1000;
    } while(s == 0); 

    return n;
}

int main(void) {
    while(!_kbhit()) {
        printf("%d\n", pnr());
        _sleep(1);
    }

    return 0;
}
