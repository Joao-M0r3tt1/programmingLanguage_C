/*
en-US: EXAMPLE_05.C - Example 05. Structure variable initialization
- Statement: The following statement creates and initializes a variable of the type defined in the lp-09_ex04.c example:
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_05.C - Exemplo 05. Inicialização de variável estrtutura
- Enunciado: a declaração a seguir cria e inicia uma variável do tipo definido no exemplo lp-09_ex04.c:
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