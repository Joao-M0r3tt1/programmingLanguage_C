/*
en-US: EXERCISE_05.C - Exercise 05. Payroll total
- Statement: create the function total_salaries(v, n), which returns the sum of the salaries of the n employees stored in the vector v. Also make a program to test its function
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_05.C - Exercicio 05. Total da folha de pagamento
- Enunciado: crie a função total_salarios(v, n), que devolve a soma dos salários dos n funcionários armazenados no vetor v. Faça também um programa para testar a sua função
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

float total_salaries(Employee v[], int n) {
    float sumSalary = 0;

    for(int i = 0; i < n; i++)
        sumSalary += v[i].wage;
    
    return sumSalary;
}

int main(void) {
    Employee x[] = {{561, "Person 01", 9200.00, {2, 7, 2012}}, 
                    {295, "Person 02", 6100.00, {5, 9, 2015}},
                    {473, "Person 03", 8500.00, {1, 6, 2013}},  
                    {102, "Person 04", 7300.00, {3, 8, 2014}},  
                    {384, "Person 05", 5400.00, {4, 9, 2016}}};

    printf("Payroll total: %.2f", total_salaries(x, 5));
    
    return 0;
}