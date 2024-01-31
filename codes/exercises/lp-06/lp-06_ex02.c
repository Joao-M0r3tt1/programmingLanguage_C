/*
en-US: EXERCISE_02.C - Exercise 02. Average temperature
- Statement: The following program must read the temperatures recorded daily, for a week, and report on how many days the temperature was above the average for that period. Create the necessary functions for the correct execution of this program
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_02.C - Exercicio 02. Temperatura média
- Enunciado: o programa a seguir deve ler as temperaturas registradas diariamente, durante uma semana, e informar em quantos dias a temperatura esteve acima da média para o referido período. Crie as funções necessa´rias para a correta execução desse programa
*/

#include <stdio.h> 

void fill(float w[]) {
    int i = 0;

    do {
        printf("%dst temperature? ", (i + 1));
        scanf("%f", &w[i++]);
    } while(i < 7);
    
    puts("");
}

float calc_average(float w[]) {
    float average = 0.0;
    
    for(int i = 0; i < 7; i++) {
        average += w[i];
    }

    return (average / 7);
}

int account(float w[], int a) {
    int sum = 0;
    
    for(int i = 0; i < 7; i++) {
        if(w[i] > a) sum += 1;
    }

    return sum;
}

int main(void) {
    float vector[7];
    fill(vector);
    float average = calc_average(vector);

    printf("Average: %.1f %cC\n", average, 248);
    printf("Days above average: %d\n", account(vector, average));

    return 0; 
}