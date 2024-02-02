/*
en-US: EXERCISE_04.C - Exercise 04. Testing the lsearch() function
- Statement: complete and run the program
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_04.C - Exercicio 04. Teste da função lsearch()
- Enunciado: complete e execute o programa
*/

#include <stdio.h>

int lsearch(int x, int v[], int n) {
    for(int i = 0; i < n; i++)
        if(x == v[i]) return 1;
    return 0;
}

int main(void) {
    int vector[8] = {66, 80, 31, 48, 27, 75, 19, 52};

    printf("27: %d\n", lsearch(27, vector, 8));
    printf("51: %d\n", lsearch(51, vector, 8));

    return 0;
}