/*
en-US: EXAMPLE_06.C - Example 06. Omission of else
- Statement: A gas station gives a 5% discount for fuel supplies worth more than R$100.00. Given the number of liters filled and the price per liter of fuel, enter the total amount and the discount amount (only if there is a discount).
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_06.C - Exemplo 06. Omissão de else
- Enunciado: Um posto de combustíveis dá um desconto de 5% para abastecimentos com valores superiores a R$ 100,00. Dados o número de litros abastecidos e o preço do litro de combustível, informe o valor total e o valor do desconto (apenas se houver um desconto).
*/

#include <stdio.h> 

int main(void) {
    float liters, price, total, discount;

    printf("Liters? ");
    scanf("%f", &liters);
    printf("Price? ");
    scanf("%f", &price);
    total = liters * price;
    if(total > 100.00) {
        discount = 0.05 * total;
        printf("Discount: R$ %.2f\n", discount);
        total = total - discount;
    }
    printf("Total: R$ %.2f\n", total);

    return 0;
}