/*
en-US: EXAMPLE_03.C - Example 03. Implementation of linear search
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_03.C - Exemplo 03. Implementação da busca linear
_____________________________________________________________________________________________________________________

- To determine whether an item x belongs to a vector v[0..n-1], using linear search:

    - For i ranging from 0 to n-1, do:
        - If x equals v[i], return true
        
    - Return false
*/

int lsearch(int x, int v[], int n) {
    for(int i = 0; i < n; i++)
        if(x == v[i]) return 1;
    return 0;
}