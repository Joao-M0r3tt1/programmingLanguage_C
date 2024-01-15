/* TECLADO.C - Exercicio 9. Teclado */

/* Enunciado: A função _kbhit(), declarada em conio.h, devolde verdade apenas quando alguma tecla é pressionada. Usando essa função, e o comando while, crie um progrma que exibe a palavra TESTE enquanto nenhuma tecla for pressionada. */

#include <stdio.h>
#include <conio.h>

int main(void) {
    while(!_kbhit()) {
        puts("TESTE");
    }
    
    return 0;
}
