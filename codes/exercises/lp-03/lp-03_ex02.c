/*
en-US: EXERCISE_02.C - Exercise 02. Colors
- Statement: The following program should display each color number in its corresponding color, however, it is not doing so. Make the necessary correction
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_02.C - Exercicio 02. Cores
- Enunciado: o programa a seguir deveria exibir cada número de cor em sua cor correspondente, porém, ele não está fazendo isso. Faça a correção necessária
*/


/* Error program

#include <stdio.h>
#include <conio.h>

int main(void) {
    int c;
    for(c = 0; c <= 15; c++) 
        _textcolor(c);
        printf("Color %d\n", c);
    return 0;
}
*/

/* Correct program */
#include <stdio.h>
#include <conio.h>

int main(void) {
    int c;
    for(c = 0; c <= 15; c++) {
        _textcolor(c);
        printf("Color %d\n", c);
    }
    return 0;
}
