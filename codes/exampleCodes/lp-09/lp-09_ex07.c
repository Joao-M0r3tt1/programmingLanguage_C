/*
en-US: EXAMPLE_07.C - Example 07. Reading and Displaying Structure
- Statement: The fields of a structure are read and displayed in the same way as simple variables:
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_07.C - Exemplo 07. Leitura e exibição de estrutura
- Enunciado: os campos de uma estrutura são lidos e exibidos da mesma forma que as variáveis simples:
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
    Employee x;

    printf("Code.....: "); scanf("%d%*c", &x.code);   // "%*c" reads and discards a character
    printf("Name.....: "); gets(x.name);
    printf("Wage.....: "); scanf("%f", &x.wage);
    printf("Admission: "); scanf("%d/%d/%d", &x.admission.day, &x.admission.month, &x.admission.year);

    printf("\nEmployee.: %d %s %.2f %02d/%02d/%d\n", x.code, x.name, x.wage, x.admission.day, x.admission.month, x.admission.year);

    return 0;
}