/*
en-US: EXERCISE_07.C - Exercise 07. Consumption
- Statement: Given a distance covered in kilometers, and the total liters of fuel used to cover it, inform the average consumption of the vehicle
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_07.C - Exercicio 07. Consumo
- Enunciado: Dada uma distância percorrida em quilômetros, e o total de litros de combustível gasto para percorrê-la, informe o consumo médio do veículo
*/

#include <stdio.h>

int main(void) {
    float distanceKm, litersOfFuel;

    printf("Distance (Km)? ");
    scanf("%f", &distanceKm);
    printf("Fuel? ");
    scanf("%f", &litersOfFuel);
    printf("Consumption = %.2f Km/l\n", (distanceKm / litersOfFuel));

    return 0;
}