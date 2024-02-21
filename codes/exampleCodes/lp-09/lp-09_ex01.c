/*
en-US: EXAMPLE_01.C - Example 01. Labeled structure type definition
- Statement: The following definition creates a Labeled structure type, to store an employee's code, name, and salary
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_01.C - Exemplo 01. Definição de tipo estrutura rotulado
- Enunciado: a definição a seguir cria um tipo de estrutura Rotulado, para armazenar o código, o nome e o salário de um funcionário
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-09.pdf
*/

struct employee {   // employee is the type label
    int code;
    char name[21];
    float wage;
};