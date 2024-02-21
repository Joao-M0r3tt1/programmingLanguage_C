/*
en-US: EXAMPLE_06.C - Example 06. Access to structure variable fields
- Statement: access to the fields of a structure is done with the Field Selection operator, represented by "."
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_06.C - Exemplo 06. Acesso aos campos de variável estrutura
- Enunciado: o acesso aos campos de uma estrutura é feito com o operador de Seleção de Campo, representado por "."
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-09.pdf
*/

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

Employee variableEmployee = {413, "Joao V.", 10865.00, {15, 2, 2024}};

int main(void) {
    variableEmployee.code;           // accesses the first field of variableEmployee
    variableEmployee.name[0];        // vector can be indexed like this
    variableEmployee.admission.day;  // structure, a subfield can be selected in this way
    
    return 0;
}