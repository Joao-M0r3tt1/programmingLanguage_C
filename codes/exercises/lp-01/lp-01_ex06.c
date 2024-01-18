/* MEDIA.C - Exercicios 7. Media */
/* Enunciado: Dadas as duas notas de prova de um aluno, informe a sua média */

#include <stdio.h>

int main(void) {
    float average1, average2;

    printf("Informe as duas notas do aluno: ");
    scanf("%f %f", &average1, &average2);

    printf("Media do aluno = %.2f\n", ((average1 + average2) / 2));
}