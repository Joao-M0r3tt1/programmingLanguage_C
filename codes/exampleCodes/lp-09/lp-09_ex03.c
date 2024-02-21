/*
en-US: EXAMPLE_03.C - Example 03. Labeled and named structure type definition
- Statement: the following definition creates a Labeled and Named structure type, to store an employee's code, name and salary:
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_03.C - Exemplo 03. Definição de tipo estrutura rotulado e nomeado
- Enunciado: a definição a seguir cria um tipo estrutura Rotulado e Nomeado, para armazenar o código, o nome e o salário de um funcionário:
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-09.pdf
*/

typedef struct employee {   // type label 
    int code;
    char name[21];
    float wage;
} Employee;                 // tyoe name


// The following statements create two variables of the same type
struct employee variable1;  // variable from type label
Employee variable2;         // variable from type name