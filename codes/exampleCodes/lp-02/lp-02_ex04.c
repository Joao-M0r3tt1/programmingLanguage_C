/*
en-US: EXAMPLE_04.C - Example 04. The if-else command
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_04.C - Exemplo 04. O comando if-else
*/

#include <stdio.h>

int main(void) {
    int age;

    printf("Age? ");
    scanf("%d", &age);
    if(age < 18) puts("under age");
    else puts("of legal age");

    return 0;
}