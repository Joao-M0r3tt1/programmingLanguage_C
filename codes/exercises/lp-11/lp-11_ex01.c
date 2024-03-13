/*
en-US: EXERCISE_01.C - Exercise 01. Interleaving ordered sequences (merge)
- Statement: Create the function merge(v, n, w, m), which takes two vectors of Sorted integers, v[n] and w[m], and returns a dynamic Sorted vector with all items from v and w
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_01.C - Exercicio 01. Intercalação de sequências ordenadas (merge)
- Enunciado: Crie a função merge(v, n, w, m), que recebe dois vetores de inteiros Ordenados, v[n] e w[m], e devolve um vetor dinâmico Ordenado com todos os itens de v e w
*/

#include <stdio.h>
#include <stdlib.h>
#define VECTOR_V 5 
#define VECTOR_W 4

int *merge(int v[], int n, int w[], int m) {
    int i = 0, j = 0, pos = 0;
    int *p = malloc((n + m) * sizeof(int));
    
    while((i + j) < (n + m)) {
      if(i == n) p[pos++] = w[j++];
      else if (j == m) p[pos++] = v[i++];
      else if(v[i] > w[j]) p[pos++] = w[j++];
      else p[pos++] = v[i++];
    }

    return p;
}

int main(void) {
    int v[VECTOR_V] = {12, 39, 61, 75, 99};
    int w[VECTOR_W] = {28, 40, 55, 81};
    int *p = merge(v, VECTOR_V, w, VECTOR_W);

    for(int i = 0; i < (VECTOR_V + VECTOR_W); i++)
        printf("%d\n", p[i]);
    free(p);

    return 0;
}