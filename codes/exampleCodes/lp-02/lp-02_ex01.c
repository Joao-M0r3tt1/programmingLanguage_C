/* TIPOBOOL.C - O tipo bool */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool a = false, b = 7;

    printf("Bool ocupa: %d Bytes\nFalse e representado por: %d em booleano\nTudo o que e diferente de zero e representado por: %d em booleano\n", sizeof(bool), a, b);    // 1 0 1
    /* printf("%d %d %d\n", sizeof(bool), p, q); */

    return 0; 
}
