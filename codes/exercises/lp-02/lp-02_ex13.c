/*
en-US: EXERCISE_13.C - Exercise 13. Vehicle rotation - 1st version
- Statement: using the if-else command, write a program to read a vehicle's license plate number (without the letters) and inform which day of the week it should be on rotation
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_13.C - Exercicio 13. Rodízio de veículos - 1º versão
- Enunciado: usando o comando if-else, faça um programa para ler o número da placa de um veículo (sem as letras) e informar em que dia da semana ele deve estar no rodízio
*/

#include <stdio.h>

int main(void) {
    int plateNumber;

    printf("Plate number? ");
    scanf("%d", &plateNumber);

    if(plateNumber == 1 || plateNumber == 2) 
        puts("Monday");
    else if(plateNumber == 3 || plateNumber == 4)
        puts("Tuesday");
    else if(plateNumber == 5 || plateNumber == 6)
        puts("Wednesday");
    else if(plateNumber == 7 || plateNumber == 8)
        puts("Thursday");
    else if(plateNumber == 9 || plateNumber == 0)
        puts("Friday");
    else puts("Invalid!");

    return 0;
}