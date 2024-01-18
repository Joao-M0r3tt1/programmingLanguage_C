/*
en-US: EXERCISE_08.C - Exercise 08. Temperature
- Statement: Given a temperature in degrees Fahrenheit (°F), enter the corresponding temperature in degrees Celsius (°C)
[Hint: C = (F - 32) * (5 / 9)]
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_08.C - Exercicio 08. Temperatura
- Enunciado: Dada uma temperatura em graus Fahrenheit (°F), informe a temperatura correspondente em graus Celsius (°C)
[Dica: C = (F - 32) * (5 / 9)]
*/

#include <stdio.h> 

int main(void) {
    float fahrenheit;

    printf("Temperature? ");
    scanf("%f", &fahrenheit);
    printf("The temperature %.0f °F, corresponding to %.0f °C\n", fahrenheit, ((fahrenheit - 32) * (5.0 / 9)));

    return 0;
}