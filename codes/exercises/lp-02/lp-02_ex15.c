/*
en-US: EXERCISE_15.C - Exercise 15. body mass index (BMI)
- Statement: a person with a BMI between 18.5 and 30 is normal, with a BMI below 18.5 they are thin and with a BMI above 30 they are obese. Given a person's weight and height, state their situation
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_15.C - Exercicio 15. índice de massa corpórea (IMC)
- Enunciado: uma pessoa com IMC entre 18.5 e 30 está normal, com IMC abaixo de 18.5 está magra e com IMC acima de 30 está obesa. Dados o peso e a altura de uma pessoa, informe a sua situação
*/

#include <stdio.h>

int main(void) {
    float weight, height, bmi;

    printf("Weight and height? ");
    scanf("%f %f", &weight, &height);
    bmi = weight / (height * height);
    if(bmi >= 18.5 && bmi <= 30)
        puts("Normal");
    else if(bmi < 18.5)
        puts("Slim");
    else puts("Obese");

    return 0;
}