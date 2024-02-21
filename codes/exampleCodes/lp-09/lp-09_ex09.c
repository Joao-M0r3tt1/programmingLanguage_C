/*
en-US: EXAMPLE_09.C - Example 09. Function that receives structure as a parameter
- Statement: Structures are passed by Value, even when they contain fields that are vectors
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_09.C - Exemplo 09. Função que recebe estrutura como parâmetro
- Enunciado: As estruturas são passadas por Valor, mesmo quando elas contêm campos que são vetores
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

void readjustment(Employee x2) {
    x2.wage *= 1.10;    // it only changes the copy of the structure
    printf("\nx2 = {%d, %s, %.2f, {%02d, %02d, %d}}\n", x2.code, x2.name, x2.wage,
            x2.admission.day, x2.admission.month, x2.admission.year);
}

int main(void) {
    Employee x1 = {413, "Fred Barbosa", 8750.00, {25, 10, 2017}};

    readjustment(x1);
    readjustment(x1);

    printf("\nx1 = {%d, %s, %.2f, {%02d, %02d, %d}}\n", x1.code, x1.name, x1.wage,
            x1.admission.day, x1.admission.month, x1.admission.year);

    return 0;
}