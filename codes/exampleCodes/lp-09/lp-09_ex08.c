/*
en-US: EXAMPLE_08.C - Example 08. Structure assignment
- Statement: Assignment between structures only works if they are of the same type.
The values of the fields in the source structure are copied, one by one, to the fields in the assignment target structure
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_08.C - Exemplo 08. Atribuição de estrutura
- Enunciado: A atribuição entre estruturas só funciona se elas forem do mesmo tipo.
Os valores dos campos da estrutura de origem são copiados, um a um, para os campos da estrutura de destino da atribuição
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

int main(void) {
    Employee x1 = {413, "Fred Barbosa", 8750.00, {25, 10, 2017}};
    Employee x2 = x1;

    printf("\nx2 = {%d %s %.2f {%02d/%02d/%d}}\n", x2.code, x2.name, x2.wage, x2.admission.day, x2.admission.month, x2.admission.year);

    return 0;
}