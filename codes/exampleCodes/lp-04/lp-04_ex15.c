/*
en-US: EXAMPLE_15.C - Example 15. Auto variable behavior
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_15.C - Exemplo 15. Comportamento de variável automática
*/

#include <stdio.h>
#include <conio.h>
#include <time.h>

void sequence(void) {
    auto int n = 0;
    printf("%d, ",n++);
}

int main(void) {
    while(!_kbhit()) {
        sequence();
        _sleep(1);
    }
    
    return 0;
}
