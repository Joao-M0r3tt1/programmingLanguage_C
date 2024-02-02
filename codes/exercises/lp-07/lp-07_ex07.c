/*
en-US: EXERCISE_07.C - Exercise 07. Recursive version of binary search
- Statement: create the recursive function rbsearch(x, v, p, u), which performs a binary search to determine whether item x is in the increasing vector v, indexed from p to u
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_07.C - Exercicio 07. Versão recursiva de busca binária
- Enunciado: crie a função recursiva rbsearch(x, v, p, u), que faz uma busca binária para determinar se o item x está no vetor crescente v, indexado de p até u
*/

#include <stdio.h>

int rbsearch(int x, int v[], int p, int u) {
    if(p > u) return 0;
    else {
        int m = (p + u) / 2;
        if(x == v[m]) return 1;
        if(x < v[m]) rbsearch(x, v, p, (m - 1));
        else rbsearch(x, v, (m + 1), u);
    }
}

int main(void) {
    int vector[8] = {19, 27, 31, 48, 52, 66, 75, 80};

    printf("27: %d\n", rbsearch(27, vector, 0, 8 - 1));
    printf("51: %d\n", rbsearch(51, vector, 0, 8 - 1));

    return 0;
}