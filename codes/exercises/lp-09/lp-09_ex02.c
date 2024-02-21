/*
en-US: EXERCISE_02.C - Exercise 02. Ordering an employee table
- Statement: the following function implements the Bubble Sort algorithm to sort a vector v with n integers. Based on it, create the function sorttab(v, n), which sorts a vector v with n employees (using the code field as the sorting key)
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_02.C - Exercicio 02. Ordenação de uma tabela de funcionários
- Enunciado: a função a seguir implementa o algoritmo Bubble Sort para ordenar um vetor v com n inteiros. Com base nela, crie a função ordenatab(v, n), que ordena um vetor v com n funcionários (usando o campo codigo como chave de ordenação)

void bsort(int v[], int n) {
    for(int i = 1; i <= (n - 1); i++)
        for(int j = 0; j < (n - i); j++)
            if(v[j] > v[j + 1])
                replacement(v, j, (j + 1));
}
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

void replacement(Employee w[], int a, int b) {
    Employee aux = w[a];
    w[a] = w[b];
    w[b] = aux; 
}

void sortTab(Employee v[], int n) {
    for(int i = 1; i <= (n - 1); i++)
        for(int j = 0; j < (n - i); j++)
            if(v[j].code > v[j + 1].code)
                replacement(v, j, (j + 1));
}