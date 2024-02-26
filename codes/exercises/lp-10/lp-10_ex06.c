/*
en-US: EXERCISE_06.C - Exercise 06. Table sorting by different fields
- Statement: Add the necessary functions that are called by main(), so that the following program can be executed
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_06.C - Exercicio 06. Ordenação de tabela por diferentes campos
- Enunciado: Adicione as funções necessárias que são chamadas por main(), para que o programa a seguir possa ser executado
*/

#include <stdio.h>
#include <string.h>

typedef struct { int code; char name[21]; float wage; } Employee;

int cmp_c(Employee *a, Employee *b) { return (a->code > b->code); }

int cmp_n(Employee *a, Employee *b) { return strcmp(a->name, b->name); }

int cmp_s(Employee *a, Employee *b) { return (a->wage > b->wage); }

void replacement(Employee v[], int x, int y) {
    Employee z = v[x];
    v[x] = v[y];
    v[y] = z;    
}

void sort(int (*cmp)(Employee *, Employee *), Employee v[], int n) {
    for(int i = 1; i <= (n - 1); i++)
        for(int j = 0; j < (n - i); j++)
            if(cmp(&v[j], &v[j + 1]))
                replacement(v, j, (j + 1));
}

void display(Employee v[], int n) {
    for(int j = 0; j < n; j++)
        printf("%d, %s, %.2f\n",
            v[j].code, v[j].name, v[j].wage);
}

int main(void) {
    Employee v[5] = {{561, "Eva Maranhao", 9200.00},
                     {295, "Ana Teixeira", 6100.00},
                     {473, "Linda Lagoa", 8500.00},
                     {102, "Catia Telles", 7300.00},
                     {384, "Beatriz Lira", 5400.00}};
    
    printf("Sort by 1-code, 2-name or 3-salary? ");
    switch (getchar()) {
        case '1': sort(cmp_c, v, 5); break;
        case '2': sort(cmp_n, v, 5); break;
        case '3': sort(cmp_s, v, 5); break;
    }
    puts("\nOrdered table:");
    display(v, 5);

    return 0;
}