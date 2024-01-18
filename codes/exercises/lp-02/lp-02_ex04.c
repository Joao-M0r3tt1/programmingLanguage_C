/*
en-US: EXERCISE_04.C - Exercise 04. Student situation - 1st version
- Statement: Given a student's two test scores, state whether he or she passed or failed. Consider that the minimum average required for approval is 6.0
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_04.C - Exercicio 04. Situação do aluno - 1º versão
- Enunciado: Dadas as duas notas de prova de um aluno, informe se ele está aprovado ou reprovado. Considere que a média mínima necessária para aprovação é 6.0
*/

#include <stdio.h>

int main(void) {
    float p1, p2, m;

    printf("Grades? ");
    scanf("%f %f", &p1, &p2);
    m = (p1 + p2) / 2;
    if(m >= 6.0) puts("approved");
    else puts("disapproved");

    return 0;
}