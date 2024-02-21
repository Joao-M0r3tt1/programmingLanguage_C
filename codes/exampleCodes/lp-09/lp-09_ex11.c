/*
en-US: EXAMPLE_11.C - Example 11. Structure comparison
- Statement: Structures cannot be fully compared with relational operators.
Structures can be compared depending on the values of a specific field
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_11.C - Exemplo 11. Comparação de estruturas
- Enunciado: Estruturas não podem ser comparadas integralmente com operadores relacionais.
Estruturas podem ser comparadas em função dos valores de um campo específico
*/

#include <stdio.h>
#include <string.h>

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

void display(Employee x) {
    printf("{%d, %s, %.2f, {%d, %d, %d}}\n",
        x.code, x.name, x.wage, 
        x.admission.day, x.admission.month, x.admission.year);
}

int main(void) {
    Employee a = {295, "Ana Teixeira", 6100.00, {5, 9, 2015}};
    Employee b = {102, "Catia Telles", 7300.00, {3, 8, 2014}};

    display(a.code < b.code ? a : b);
    display(strcmp(a.name, b.name) < 0 ? a : b);

    return 0;
}