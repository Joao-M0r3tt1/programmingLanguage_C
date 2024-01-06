/* COMANDOIFELSE.C - O comando if-else */

#include <stdio.h>

int main(void) {
    int age;

    printf("Idade? ");
    scanf("%d", &age);
    if(age < 18) puts("Menor");
    else puts("Maior");

    return 0;
}