/*
en-US: EXERCISE_06.C - Exercise 06. Student situation - 2nd version
- Statement: Given the number of absences and a student's average, state whether he or she passed or failed. Consider that approval requires a maximum of 5 absences and a minimum average of 6.0. Use a condition composed of a logical operator and display possible situations in different colors
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_06.C - Exercicio 06. Situação do aluno - 2º versão
- Enunciado: Dados o número de faltas e a média de um aluno, informe se ele está aprovado ou reprovado. Considere que a aprovação requer no máximo 5 faltas e no mínimo média 6.0. Use uma condição composta por um operador lógico e exiba as possíveis situações em cores distintas
*/

#include <conio.h>

int main(void) {
    int fouls;
    float average;

    printf("Avarage and Absences? ");
    scanf("%f %d", &average, &fouls);
    if(average >= 6.0 && fouls <= 5) {
        _textcolor(9);
        puts("approved");
    } else {
        _textcolor(12);
        puts("disapproved");
    }

    return 0;
}