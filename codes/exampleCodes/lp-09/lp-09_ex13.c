/*
en-US: EXAMPLE_13.C - Example 13. Route search on the map
- Statement: Given a starting point x and an ending point y on a map, display all routes leading from x to y
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_13.C - Exemplo 13. Busca de rotas num mapa
- Enunciado: Dado um ponto de partida x e um ponto de chegada y num mapa, exiba todas as rotas que levam de x até y

Grafo | Fork
1 ------- → 3 → →
↑         ↙ ↑     ↘ 
↑       ↙   |       ↘
|     ↙     |         5
↓   ↙       |       ↗
↓ ↙         ↓     ↗ 
2 ------- → 2 ← ← 

Search Tree
        ---------------------- 1 ----------------------              
        ↓                                             ↓
------- 2 -------                            ----------------- 3 -----------       
↓               ↓                            ↓                 ↓           ↓
1           --- 4 ---                    --- 2 ---         --- 4 ----      5                                                              
            ↓       ↓                    ↓       ↓         ↓        ↓
        --- 3 ---   5                    1   --- 4 ---     3        5
        ↓   ↓   ↓                            ↓       ↓
        2   4   5                            3       5

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

void routes(int x, int y, Lane v[], int n) {
    static int r[100], i = 0;

    r[i++] = x;
    if(x == y ) display(r, i);
    else 
        for(int j = 0; j < n; j++) 
            if(v[j].origin == x && !belongs(v[j].destiny, r, i))
                routes(v[j].destiny, y, v, n);
    i--;
}

int main(void) {
    Lane v[10] = {{1,2}, {1,3},
                  {2,1}, {2,4},
                  {3,2}, {3,4}, {3,5},
                  {4,3}, {4,5},
                  {5,4}};
    
    routes(1, 5, v, 10);

    return 0;
}