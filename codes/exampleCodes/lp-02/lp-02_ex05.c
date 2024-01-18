/*
en-US: EXAMPLE_05.C - Example 05. Use of blocks
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_05.C - Exemplo 05. Uso de blocos
*/

#include <conio.h>

int main(void) {
    float n1, n2;

    printf("Grades? ");
    scanf("%f %f", &n1, &n2);
    if(((n1 + n2) / 2) >= 6 ) { _textcolor(9); puts("approved\n"); }
    else { _textcolor(12); puts("disapproved\n"); }

    return 0;
}