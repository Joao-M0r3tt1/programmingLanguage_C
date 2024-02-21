/*
en-US: EXAMPLE_12.C - Example 12. Creating and starting a table
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_12.C - Exemplo 12. Criação e iniciação de uma tabela
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

int main(void) {
    Employee x[] = {{561, "Person 01", 9200.00, {2, 7, 2012}}, 
                  {295, "Person 02", 6100.00, {5, 9, 2015}},
                  {473, "Person 03", 8500.00, {1, 6, 2013}},  
                  {102, "Person 04", 7300.00, {3, 8, 2014}},  
                  {384, "Person 05", 5400.00, {4, 9, 2016}}};

    return 0;
}