/*
en-US: EXAMPLE_04.C - Example 04. Vector and structure type fields
- Statement: a structure can have fields of any type. For example, the Employee type has fields of Primitive (code and salary), Vector (name) and Structure (admission) types:
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_04.C - Exemplo 04. Campos de tipos vetor e estrutura
- Enunciado: uma esturtura pode ter campos de quaisquer tipos. Por exemplo, o tipo Funcionario tem campos de tipos Primitivos (codigo e salario), Vetor(nome) e Estrtutura (admissao):
*/

typedef struct {    // The label can be omitted because the structure type is named
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