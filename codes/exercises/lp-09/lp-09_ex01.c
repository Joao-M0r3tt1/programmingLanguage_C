/*
en-US: EXERCISE_01.C - Exercise 01. Displaying an employee table
- Statement: create the function displaytab(v, n), which displays a vector v with n employees
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_01.C - Exercicio 01. Exibição de uma tabela de funcionários
- Enunciado: crie a função exibetab(v, n), que exibe um vetor v com n funcionários
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