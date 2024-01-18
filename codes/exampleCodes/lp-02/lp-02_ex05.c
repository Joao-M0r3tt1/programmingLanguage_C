/* USODEBLOCOS.C - Uso de blocos */

#include <conio.h>

int main(void) {
    float n1, n2;

    printf("Notas? ");
    scanf("%f %f", &n1, &n2);
    if(((n1 + n2) / 2) >= 6 ) { _textcolor(9); puts("Aprovado"); }
    else { _textcolor(12); puts("Reprovado"); }

    return 0;
}