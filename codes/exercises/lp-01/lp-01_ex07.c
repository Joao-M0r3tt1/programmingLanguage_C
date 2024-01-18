/* CONSUMO.C - Exercicios 8. Consumo */
/* Enunciado: Dada uma distância percorrida em quilômetros, e o total de litros de combustível gasto para percorrê-la, informe o consumo médio do veículo */

#include <stdio.h>

int main(void) {
    float distanceKm, litersOfFuel;

    printf("Informe a distancia percorrida em Km: ");
    scanf("%f", &distanceKm);
    printf("Informe o total de litros de combustivel gastos: ");
    scanf("%f", &litersOfFuel);
    printf("Consumo medio do veiculo = %.2f Km/l\n", (distanceKm / litersOfFuel));

    return 0;
}