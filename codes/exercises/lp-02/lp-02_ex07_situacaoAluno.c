/* SITUACAODOALUNO.C - Exercício 7. Situação do aluno - 3º versão */

/* Enunciado: Dados o número de faltas e a média de um aluno, informe sua situação. Um aluno com mais de 5 faltas ou com média inferior a 4.0 é reprovado; caso contrário, se ele tem média no mínimo 6.0, ele é aprovado; senão, ele fica de recuperação.Exiba os textos em cores */

#include <stdio.h>

int main(void) {
    int fouls;
    float average;

    printf("Media e Faltas? ");
    scanf("%f %d", &average, &fouls);
    if(average < 4.0 || fouls > 5) {
        _textcolor(12);
        puts("Reprovado");
    } else if(average >= 6.0) {
        _textcolor(9);
        puts("Aprovado");
    } else {
        _textcolor(15);
        puts("Recuperacao");
    }

    return 0;
}