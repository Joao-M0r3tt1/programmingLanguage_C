/* TESTEPRIMALIDADE.C - Exercicio 14. Teste de primalidade */

/* Enunciado: um teste de primalidade um pouco mais eficiente consider o fato de que, se o número não tem divisores menores ou iguais à sua raiz quadrada (arredondada para cima), então ele é primo. Com base nisso, altere o programa anterior. Use as funções sqrt() e ceil(), de math.h 

Exemplo: 
- para n = 11, temos a raiz 3.32. Então, precisamos variar o divisor de 2 até no máximo 4
11 % 2 == 1
11 % 3 == 2
11 % 4 == 3

- para n = 1001, temos a raiz 31.64. Então, precisamos variar o divisor de 2 até no máximo 32
1001 % 2 == 1
1001 % 3 == 2
1001 % 4 == 1
1001 % 5 == 1
1001 % 6 == 5
1001 % 7 == 0

*/

#include <stdio.h>
#include <math.h>

int main(void) {
    int n, d, pivot = 0;

    printf("Numero? ");
    scanf("%d", &n);

    for(d = 2; d <= ceil(sqrt(n)); d++) 
        if(n % d == 0) { pivot = 1; break; }

    if(!pivot) puts("E primo!");
    else puts("Nao e primo!");

    return 0;
}