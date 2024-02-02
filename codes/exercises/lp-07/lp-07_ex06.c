/*
en-US: EXERCISE_06.C - Exercise 06. Recursive version of linear search
- Statement: create the recursive function research(xv, e), which performs a linear search to determine whether item x is in vector v, which has n items
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_06.C - Exercicio 06. Versão recursiva de busca linear
- Enunciado: crie a função recursiva rlsearch(x, v, n), que faz uma busca linear para determinar se o item x está no vetor v, que tem n itens
*/

#include <stdio.h>

int rlsearch(int x, int v[], int n) {
    if(n < 1) return 0;
    else {
        // return rlsearch(x, v, (n - 1)) + (x == v[n - 1]);
        if(x == v[n - 1]) return 1;
        rlsearch(x, v, (n - 1));
    }
}

int main(void) {
    int vector[8] = {66, 80, 31, 48, 27, 75, 19, 52};

    printf("27: %d\n", rlsearch(27, vector, 8));
    printf("51: %d\n", rlsearch(51, vector, 8));

    return 0;
}