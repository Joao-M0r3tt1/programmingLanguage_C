/*
en-US: EXERCISE_03.C - Exercise 03. Displaying a table ordered by code
- Statement: create a program to sort and display the employee table in the lp-09_ex12.c example, using the functions sorttab(v, n) and displaytab(v, n)
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_03.C - Exercicio 03. Exibição de uma tabela ordenada por código
- Enunciado: crie um programa para ordenar e exibir a tabela de funcionários do exemplo lp-09_ex12.c, usando as funções ordenatab(v, n) e exibetab(v, n)
*/

#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    int code;
    char name[21];
    float wage;
    Date admission;
} Employee;

void displayTab(Employee v[], int n) {
    for(int i = 0; i < n; i++)
        printf("%dª: {%d, %s, %.2f, {%d, %d, %d}}\n", (i + 1), 
            v[i].code, v[i].name, v[i].wage,
            v[i].admission.day, v[i].admission.month, v[i].admission.year);
}

void replacement(Employee w[], int a, int b) {
    Employee aux = w[a];
    w[a] = w[b];
    w[b] = aux; 
}

void sortTab(Employee v[], int n) {
    for(int i = 1; i <= (n - 1); i++)
        for(int j = 0; j < (n - i); j++)
            if(v[j].code > v[j + 1].code)
                replacement(v, j, (j + 1));
}

int main(void) {
    Employee x[] = {{561, "Person 01", 9200.00, {2, 7, 2012}}, 
                    {295, "Person 02", 6100.00, {5, 9, 2015}},
                    {473, "Person 03", 8500.00, {1, 6, 2013}},  
                    {102, "Person 04", 7300.00, {3, 8, 2014}},  
                    {384, "Person 05", 5400.00, {4, 9, 2016}}};

    sortTab(x, 5);
    displayTab(x, 5);
    
    return 0;
}