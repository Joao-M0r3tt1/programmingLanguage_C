/*
en-US: EXERCISE_14.C - Exercise 14. Vehicle rotation - 2nd version
- Statement: using the switch-case command, write a program to read a vehicle's license plate number (without the letters) and inform which day of the week it should be on rotation
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_14.C - Exercicio 14. Rodízio de veículos - 2º versão
- Enunciado: usando o comando switch-case, faça um programa para ler o número da placa de um veículo (sem as letras) e informar em que dia da semana ele deve estar no rodízio
*/

#include <stdio.h>

int main(void) {
    int plateNumber;

    printf("Plate number? ");
    scanf("%d", &plateNumber);

    switch (plateNumber) {
    case 1:
    case 2:
        puts("Monday"); break;
    case 3:
    case 4:
        puts("Tuesday"); break;
    case 5:
    case 6:
        puts("Wednesday"); break;
    case 7:
    case 8:
        puts("Thursday"); break;
    case 9:
    case 0:
        puts("Friday"); break;
    default:
        puts("Invalid!"); break;
    }

    return 0;
}