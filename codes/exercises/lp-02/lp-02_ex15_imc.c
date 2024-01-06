/* IMC.C - Exercício 15. índice de massa corpórea (IMC) */

/* Enunciado: uma pessoa com IMC entre 18.5 e 30 está normal, com IMC abaixo de 18.5 está magra e com IMC acima de 30 está obesa. Dados o peso e a altura de uma pessoa, informe a sua situação */

#include <stdio.h>

int main(void) {
    float weight, height, bmi;

    printf("Peso e altura? ");
    scanf("%f %f", &weight, &height);
    bmi = weight / (height * height);
    if(bmi >= 18.5 && bmi <= 30)
        puts("Normal");
    else if(bmi < 18.5)
        puts("Magra");
    else puts("Obesa");

    return 0;
}