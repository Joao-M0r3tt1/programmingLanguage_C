/* IMPOSTORENDA.C - Exercício 9. Imposto de renda */

/* Enunciado: Dado o salário de um funcionário, informe o valor de Imposto de Renda a ser recolhido. Considere as aliquotas na tabela abaixo 

Faixa salarial                      Aliquota
Até 1903,98                         isento
Acima de 1903,98 até 2826,65        7,5%
Acima de 2826,65 até 3751,05        15,0%
Acima de 3751,05 até 4664,68        22,5%
Acima de 4664,68                    27,5%

*/

#include <stdio.h>

int main(void) {
    float wage;

    printf("Salario? ");
    scanf("%f", &wage);

    if(wage <= 1903.98) puts("Isento");
    else if(wage > 1903.98 && wage <= 2826.65)
        printf("Aliquota 7.5%%. Imposto de renda: R$ %.2f\n", (wage * 0.075));
    else if(wage > 2826.65 && wage <= 3751.05)
        printf("Aliquota 15.0%%. Imposto de renda: R$ %.2f\n", (wage * 0.15));
    else if(wage > 3751.05 && wage <= 4664.68)
        printf("Aliquota 22.5%%. Imposto de renda: R$ %.2f\n", (wage * 0.225));
    else printf("Aliquota 27.5%%. Imposto de renda: R$ %.2f\n", (wage * 0.275));

    return 0;
}