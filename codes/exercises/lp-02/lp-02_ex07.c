/*
en-US: EXERCISE_07.C - Exercise 07. Student situation - 3rd version
- Statement: Given the number of absences and the average of a student, inform your situation. A student with more than 5 absences or with an average lower than 4.0 fails; otherwise, if he has an average of at least 6.0, he is approved; otherwise, it will be in recovery mode. Display texts in color
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_07.C - Exercicio 07. Situação do aluno - 3º versão
- Enunciado: Dados o número de faltas e a média de um aluno, informe sua situação. Um aluno com mais de 5 faltas ou com média inferior a 4.0 é reprovado; caso contrário, se ele tem média no mínimo 6.0, ele é aprovado; senão, ele fica de recuperação.Exiba os textos em cores
*/

#include <stdio.h>

int main(void) {
    int fouls;
    float average;

    printf("Avarage and Absences? ");
    scanf("%f %d", &average, &fouls);
    if(average < 4.0 || fouls > 5) {
        _textcolor(12);
        puts("disapproved");
    } else if(average >= 6.0) {
        _textcolor(9);
        puts("approved");
    } else {
        _textcolor(15);
        puts("recovery");
    }

    return 0;
}