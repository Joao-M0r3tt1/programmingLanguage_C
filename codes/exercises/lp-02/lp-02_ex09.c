/*
en-US: EXERCISE_09.C - Exercise 09. Income tax
- Statement: Given an employee's salary, enter the amount of Income Tax to be collected. Consider the rates in the table below

Salary range                        Rate
Up to 1903.98                       free
Above 1903.98 to 2826.65            7.5%
Above 2826.65 to 3751.05            15.0%
Above 3751.05 to 4664.68            22.5%
Above 4664.68                       27.5%
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_09.C - Exercicio 09. Imposto de renda
- Enunciado: Dado o salário de um funcionário, informe o valor de Imposto de Renda a ser recolhido. Considere as aliquotas na tabela abaixo 

Faixa salarial                      Aliquot
Até 1903,98                         isento
Acima de 1903,98 até 2826,65        7,5%
Acima de 2826,65 até 3751,05        15,0%
Acima de 3751,05 até 4664,68        22,5%
Acima de 4664,68                    27,5%
*/

#include <stdio.h>

int main(void) {
    float wage;

    printf("Wage? ");
    scanf("%f", &wage);

    if(wage <= 1903.98) puts("Free");
    else if(wage > 1903.98 && wage <= 2826.65)
        printf("Aliquot 7.5%%. Income tax: R$ %.2f\n", (wage * 0.075));
    else if(wage > 2826.65 && wage <= 3751.05)
        printf("Aliquot 15.0%%. Income tax: R$ %.2f\n", (wage * 0.15));
    else if(wage > 3751.05 && wage <= 4664.68)
        printf("Aliquot 22.5%%. Income tax: R$ %.2f\n", (wage * 0.225));
    else printf("Aliquot 27.5%%. Income tax: R$ %.2f\n", (wage * 0.275));

    return 0;
}