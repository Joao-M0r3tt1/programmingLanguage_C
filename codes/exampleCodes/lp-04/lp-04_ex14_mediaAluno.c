/*
en-US: EXAMPLE_14.C - Example 14. Student average
- Statement: in a subject two tests and two assignments are given, but the average is given only by the highest test grade and the highest assignment grade. Given a student's grades, provide their average
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_14.C - Exemplo 14. Média do aluno
- Enunciado: numa disciplina são dadas duas provas e dois trabalhos, mas a média é dada apenas pela maior nota de prova e a maior nota de trabalho. Dadas as notas de um aluno, informe a sua média
*/

#include <stdio.h>

float average(float a, float b) {
    return (a + b) / 2;
}

float bigger(float a, float b) {
    return (a > b) ? a : b;
}

int main(void) {
    float exam1, exam2, work1, work2;

    printf("Exams? ");
    scanf("%f %f", &exam1, &exam2);
    printf("School works? ");
    scanf("%f %f", &work1, &work2);

    printf("Average = %.1f\n", average(bigger(exam1, exam2), bigger(work1, work2)));

    return 0;
}