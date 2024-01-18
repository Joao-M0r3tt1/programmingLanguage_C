/* SITUACAODOALUNO.C - Exercício 6. Situação do aluno - 2º versão */

/* Enunciado: Dados o número de faltas e a média de um aluno, informe se ele está aprovado ou reprovado. Considere que a aprovação requer no máximo 5 faltas e no mínimo média 6.0. Use uma condição composta por um operador lógico e exiba as possíveis situações em cores distintas */

#include <conio.h>

int main(void) {
    int fouls;
    float average;

    printf("Media e Faltas? ");
    scanf("%f %d", &average, &fouls);
    if(average >= 6.0 && fouls <= 5) {
        _textcolor(9);
        puts("Aprovado");
    } else {
        _textcolor(12);
        puts("Reprovado");
    }

    return 0;
}