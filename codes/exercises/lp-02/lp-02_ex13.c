/* RODIZIOVEICULOS.C - Exercício 13. Rodízio de veículos - 1º versão */

/* Enunciado: usando o comando if-else, faça um programa para ler o número da placa de um veículo (sem as letras) e informar em que dia da semana ele deve estar no rodízio */

#include <stdio.h>

int main(void) {
    int plateNumber;

    printf("Numero da placa? ");
    scanf("%d", &plateNumber);

    if(plateNumber == 1 || plateNumber == 2) 
        puts("Segunda-feira");
    else if(plateNumber == 3 || plateNumber == 4)
        puts("Terca-feira");
    else if(plateNumber == 5 || plateNumber == 6)
        puts("Quarta-feira");
    else if(plateNumber == 7 || plateNumber == 8)
        puts("Quinta-feira");
    else if(plateNumber == 9 || plateNumber == 0)
        puts("Sexta-feira");
    else puts("Inválido!");

    return 0;
}