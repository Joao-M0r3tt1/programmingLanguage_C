/*
en-US: EXAMPLE_03.C - Example 03. Dynamic vector
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_03.C - Exemplo 03. Vetor dinâmico
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-11.pdf
*/

#include <stdio.h>
#include <stdlib.h>

void read(float [], int);
float average(float [], int);

int main(void) {
    int n;

    printf("Sequence size? ");
    scanf("%d", &n);

    float *v = malloc(n * sizeof(float));   // create vector

    read(v, n);
    printf("Average: %.2f\n", average(v, n));

    return 0;
}

void read(float v[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Number %dº? ", i + 1);
        scanf("%f", &v[i]);
    }
}

float average(float v[], int n) {
    float s = 0;

    for(int i = 0; i < n; i++)
        s += v[i];
    
    return (s / n);
}