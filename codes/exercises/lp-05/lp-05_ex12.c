/*
en-US: EXERCISE_12.C - Exercise 12. Fibonacci sequence
- Statement: in the Fibonacci sequence, the first two terms are equal to 1 and, from the third onwards, the term is given by the sum of the two previous terms. Create a recursive function that, given a positive natural n, informs the nth term of the Fibonacci sequence
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_12.C - Exercicio 12. Sequência de Fibonacci
- Enunciado: na sequência de Fibonacci, os dois primeiros termos são iguais a 1 e, a partir do terceiro, o termo é dado pela soma dos dois termos anteriores. Crie uma função recursiva que, dado um natural positivo n, informe qual o n-ésimo termo da sequência de Fibonacci
*/

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        puts("Error: Enter a valid n value (n > 0)");
        return 0; // Error value
    } else if (n == 1 || n == 2) return 1;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
    int n;

    printf("Number? ");
    scanf("%d", &n);

    printf("Fibonacci - %d-nth term: %d", n, fibonacci(n));
    
    return 0;
}