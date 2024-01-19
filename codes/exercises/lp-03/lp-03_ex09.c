/*
en-US: EXERCISE_09.C - Exercise 09. Keyboard
- Statement: The _kbhit() function, declared in conio.h, returns true only when a key is pressed. Using this function, and the while command, create a program that displays the word TEST as long as no key is pressed
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_09.C - Exercicio 09. Teclado
- Enunciado: A função _kbhit(), declarada em conio.h, devolde verdade apenas quando alguma tecla é pressionada. Usando essa função, e o comando while, crie um progrma que exibe a palavra TESTE enquanto nenhuma tecla for pressionada
*/

#include <stdio.h>
#include <conio.h>

int main(void) {
    while(!_kbhit()) {
        puts("TEST");
    }
    
    return 0;
}
