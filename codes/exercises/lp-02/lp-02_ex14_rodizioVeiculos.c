/* RODIZIOVEICULOS.C - Exercício 14. Rodízio de veículos - 2º versão */

/* Enunciado: usando o comando switch-case, faça um programa para ler o número da placa de um veículo (sem as letras) e informar em que dia da semana ele deve estar no rodízio */

#include <stdio.h>

int main(void) {
    int plateNumber;

    printf("Numero da placa? ");
    scanf("%d", &plateNumber);

    switch (plateNumber) {
    case 1:
    case 2:
        puts("Segunda-feira"); break;
    case 3:
    case 4:
        puts("Terca-feira"); break;
    case 5:
    case 6:
        puts("Quarta-feira"); break;
    case 7:
    case 8:
        puts("Quinta-feira"); break;
    case 9:
    case 0:
        puts("Sexta-feira"); break;
    default:
        puts("Invalido!"); break;
    }

    return 0;
}