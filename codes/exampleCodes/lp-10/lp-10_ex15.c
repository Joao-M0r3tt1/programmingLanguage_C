/*
en-US: EXAMPLE_15.C - Example 15. Passagem de função como parâmetro
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_15.C - Exemplo 15. Passagem de função como parâmetro
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-10.pdf
*/

#include <stdio.h>

int increasing(int x, int y) { return (x > y); }

int decreasing(int x, int y) { return (x < y); }

void replacement(int *p, int *q) {
    int x = *p;
    *p = *q;
    *q = x;
}

void sort(int (*cmp) (int,int), int v[], int n) {
    for(int i = 1; i <= (n-1); i++)
        for(int j = 0; j < (n-i); j++) 
            if(cmp(v[j], v[j+1]))
                replacement(&v[j], &v[j+1]);
}

void display(int v[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d\n", v[i]);
}

int main(void) {
    int v[5] = {27, 55, 18, 34, 47};

    sort(increasing, v, 5);
    puts("Ascending order: ");
    display(v, 5);
    sort(decreasing, v, 5);
    puts("Descending order: ");
    display(v, 5);

    return 0;
}