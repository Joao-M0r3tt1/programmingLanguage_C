/*
en-US: EXAMPLE_10.C - Example 10. Limited depth search
- Statement: Change the routes() function, from the lp-09_ex13.c example, adding a parameter to indicate the maximum depth at which the search tree can be explored (if the depth is reached, explore another branch)
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_10.C - Exemplo 10. Busca em profundidade limitada
- Enunciado: Altere a função rotas(), do exemplo lp-09_ex13.c adicionando um parâmetro para indicar a profundidade máxima em que a árvore de busca pode ser explorada (se a profundidade for atingida, explore outro ramo) 

Grafo | Fork
1 ------- → 3 → →
↑         ↙ ↑     ↘ 
↑       ↙   |       ↘
|     ↙     |         5
↓   ↙       |       ↗
↓ ↙         ↓     ↗ 
2 ------- → 2 ← ← 

Search Tree
        ---------------------- 1 -------------------------------                       | level 01
        ↓                                                      ↓                        
------- 2 -------                            ----------------- 3 -----------           | level 02
↓               ↓                            ↓                 ↓           ↓            
1           --- 4 ---                    --- 2 ---         --- 4 ---       5           | leval 03                                        
            ↓       ↓                    ↓       ↓         ↓       ↓
        --- 3 ---   5                    1   --- 4 ---     3       5                   | level 04 
        ↓   ↓   ↓                            ↓       ↓
        2   4   5                            3       5                                 | level 05 
*/

#include <stdio.h>

typedef struct { int origin; int destiny; } Lane;

int belongs(int x, int r[], int n) {
    for(int i = 0; i < n; i++)
        if(x == r[i]) return 1;
    return 0;
}

void display(int r[], int n) {
    for(int j = 0; j < n; j++) printf("%d,", r[j]);
    printf("\b.\n");
}

void routes(int x, int y, Lane v[], int n, int depthLimit) {
    static int r[100], i = 0;

    r[i++] = x;
    if(x == y ) display(r, i);
    else if(i < depthLimit)
        for(int j = 0; j < n; j++) 
            if(v[j].origin == x && !belongs(v[j].destiny, r, i))
                routes(v[j].destiny, y, v, n, depthLimit);
    i--;
}

int main(void) {
    Lane v[10] = {{1,2}, {1,3},
                  {2,1}, {2,4},
                  {3,2}, {3,4}, {3,5},
                  {4,3}, {4,5},
                  {5,4}};
    
    routes(1, 5, v, 10, 5);

    return 0;
}