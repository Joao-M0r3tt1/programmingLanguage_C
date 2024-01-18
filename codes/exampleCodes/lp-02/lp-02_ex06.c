/* OMISSAOELSE.C - Omissão de else */

/* Enunciado: Um posto de combustíveis dá um desconto de 5% para abastecimentos com valores superiores a R$ 100,00. Dados o número de litros abastecidos e o preço do litro de combustível, informe o valor total e o valor do desconto (apenas se houver um desconto). */

#include <stdio.h> 

int main(void) {
    float liters, price, total, discount;

    printf("Litros abastecido? ");
    scanf("%f", &liters);
    printf("Preco do litro? ");
    scanf("%f", &price);
    total = liters * price;
    if(total > 100.00) {
        discount = 0.05 * total;
        printf("Desconto: R$ %.2f\n", discount);
        total = total - discount;
    }
    printf("Total: R$ %.2f\n", total);

    return 0;
}