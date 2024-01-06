/* TEMPERATURA.C - Exercicios 9. Temperatura */
/* Enunciado: Dada uma temperatura em graus Fahrenheit (°F), informe a temperatura correspondente em graus Celsius (°C)
[Dica: C = (F - 32) * (5 / 9)] */

#include <stdio.h> 

int main(void) {
    float fahrenheit;

    printf("Informe a temperatura? ");
    scanf("%f", &fahrenheit);
    printf("A temperatura %.0f °F, correspondente a %.0f °C\n", fahrenheit, ((fahrenheit - 32) * (5.0 / 9)));

    return 0;
}