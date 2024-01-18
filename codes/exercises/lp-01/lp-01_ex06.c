/*
en-US: EXERCISE_06.C - Exercise 06. Average
- Statement: Given a student's two test scores, inform their average
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_06.C - Exercicio 06. Média
- Enunciado: Dadas as duas notas de prova de um aluno, informe a sua média
*/

#include <stdio.h>

int main(void) {
    float average1, average2;

    printf("Grades? ");
    scanf("%f %f", &average1, &average2);

    printf("Average = %.2f\n", ((average1 + average2) / 2));
}