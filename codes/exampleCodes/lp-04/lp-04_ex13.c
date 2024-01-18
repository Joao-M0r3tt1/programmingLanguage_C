/*
en-US: EXAMPLE_13.C - Example 13. Potency with natural exponent
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_13.C - Exemplo 13. Potência com expoente natural
*/

#include <stdio.h>

double potency(double x, unsigned int n) {
    double p = 1;

    for(unsigned int i = 1; i <= n; i++) 
        p *= x;
    
    return p;
}

int main(void) {
    printf("%.1f\n", potency(2, 5));   // 32.0

    return 0;
}