/* CORES.C - Exercicio 2. Cores */

/* Enunciado: o programa a seguir deveria exibir cada número de cor em sua cor correspondente, porém, ele não está fazendo isso. Faça a correção necessária */


/* Porgrama com erro

#include <stdio.h>
#include <conio.h>

int main(void) {
    int c;
    for(c = 0; c <= 15; c++) 
        _textcolor(c);
        printf("Cor %d\n", c);
    return 0;
}*/

/* Correto */

#include <stdio.h>
#include <conio.h>

int main(void) {
    int c;
    for(c = 0; c <= 15; c++) {
        _textcolor(c);
        printf("Cor %d\n", c);
    }
    return 0;
}
