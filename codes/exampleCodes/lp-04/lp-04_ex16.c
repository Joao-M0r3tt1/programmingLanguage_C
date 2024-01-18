/*
en-US: EXAMPLE_16.C - Example 16. Pseudorandom numbers
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_16.C - Exemplo 16. Números pseudoaleatórios
_____________________________________________________________________________________________________________________

obs: pnr = Pseudorandom numbers | npa = Números pseudoaleatórios
*/

#include <stdio.h>
#include <conio.h>
#include <time.h>

int prn(void) {     
    static unsigned s = 1234;
    auto unsigned n = s % 100;

    s += s / 10;

    return n;
}

int main(void) {
    while(!_kbhit()) {
        printf("%d\n", prn());
        _sleep(1);
    }

    return 0;
}