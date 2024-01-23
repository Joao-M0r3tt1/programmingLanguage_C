/*
en-US: EXERCISE_05.C - Exercise 05. Countdown
- Statement: create the recursive function ctd(n), which displays a countdown from n >= 0 to 1
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_05.C - Exercicio 05. Contagem regressiva
- Enunciado: crie a função recursiva cr(n), que exibe uma contagem regressiva de n >= 0 até 1 
_____________________________________________________________________________________________________________________

particular case:
                   ctd(3) ----------> 321
                     |                 |  
printf("%d", 3)      |                 |  
                     |                 |
                   ctd(2) ----------> 321   

general case:
                   ctd(n) ----------> ctd(n-1)
                     |                   |  
printf("%d", 3)      |                   |  
                     |                   |
                   ctd(n-1) ----------> ctd(n-1) 
_____________________________________________________________________________________________________________________

obs: ctd() = countdown | cr() = contagem regressiva
*/

#include <stdio.h>

void ctd(int n) {
    if(n == 0) return;
    printf("%d", n);
    ctd(n - 1);
}

int main(void) {
    int n;

    printf("Number? ");
    scanf("%d", &n);

    ctd(n);

    return 0;
}