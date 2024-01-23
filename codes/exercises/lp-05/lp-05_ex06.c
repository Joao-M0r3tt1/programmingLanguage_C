/*
en-US: EXERCISE_06.C - Exercise 06. Progressive count
- Statement: create the recursive function pc(n), which displays a progressive count from 1 to n >= 0
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_06.C - Exercicio 06. Contagem progressiva
- Enunciado: crie a função recursiva cp(n), que exibe uma contagem progressiva de 1 até n >= 0 
_____________________________________________________________________________________________________________________

particular case:
pc(3) ----------> 123
  |                |  
  |                | printf("%d", 3)  
  |                |
pc(2) ----------> 12   

general case:
pc(n) ----------> pc(n-1)
  |                   |  
  |                   | printf("%d", 3)  
  |                   |
pc(n-1) ----------> pc(n-1) 
_____________________________________________________________________________________________________________________

obs: pc() = progressive count | cp() = contagem progressiva
*/

#include <stdio.h>

void pc(int n) {
    if(n == 0) return;
    pc(n - 1);
    printf("%d", n);
}

int main(void) {
    int n;

    printf("Number? ");
    scanf("%d", &n);

    pc(n);

    return 0;
}