/*
en-US: EXERCISE_08.C - Exercise 08. Hanoi function
- Statement: create the recursive function hanoi(n, origin, auxiliary, destination), which solves the Towers of Hanoi problem, moving n disks from the origin tower to the destination tower, using the auxiliary tower. For example, calling hanoi(3, 'A', 'B', 'C') should solve the problem discussed in Example 7 of the example folder exampleCodes/lp-05
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_08.C - Exercicio 08. Função hanói
- Enunciado: crie a função recursiva hanoi(n, origem, auxiliar, destino), que resolve o problema das Torres de Hanói, movendo n discos da torre origem, para a torre destino, usando a torre auxiliar. Por exemplo, a chamada hanoi(3, 'A', 'B', 'C') deve resolver o problema discutido no Exemplo 7 da pasta examploCodes/lp-05 
*/

#include <stdio.h>

void hanoi(int n, char origin, char auxiliary, char destination) {
    if(n == 0) return;
    hanoi(n - 1, origin, destination, auxiliary);
    printf("%c -> %c\n", origin, destination);
    hanoi(n - 1, auxiliary, origin, destination);
}

int main(void) {
    int n;
    
    printf("Disks? ");
    scanf("%d", &n);

    hanoi(n, 'A', 'B', 'C');

    return 0;
}