/*
en-US: EXAMPLE_04.C - Example 04. Implementation of binary search
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_04.C - Exemplo 04. Implementação da busca binária
_____________________________________________________________________________________________________________________

- To determine whether an item x belongs to a vector v[0..n-1], using binary search:

    - Let p = 0
    - Let u = n-1
    - While p <= u
        - Let m = (p + u) / 2
        - If x = v[m], return true
        - If x < v[m], let u = m-1
        - else, let p = m+1
    
    - Return false
*/

int bsearch(int x, int v[], int n) {
    int p = 0;
    int u = (n - 1);

    while(p <= u) {
        int m = ((p + u) / 2);

        if(x == v[m]) return 1;
        if(x < v[m]) u = (m - 1);
        else p = (m + 1);
    }
    return 0;
}