/*
en-US: EXERCISE_07.C - Exercise 07. Verifying digit
- Statement: at a bank branch, accounts are identified by six-digit numbers plus a check digit (see example). Given a natural number n, output the corresponding account number

Example:
Let n = 7314
1st: calculate the sum s of the digits of n (i.e. s = 7 + 3 + 1 + 4 = 15)
2nd: calculate the remainder r from dividing s by 10 (i.e. r = 5)
Account number: 007314-5
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_07.C - Exercicio 07. Dígito verificador
- Enunciado: numa agência bancária, as contas são identificadas por números de seis digitos mais um dígito verificador (vide exemplo). Dado um número natural n, exiba o número da conta correspondente 

Exemplo:
Seja n = 7314
1º: calcular a soma s dos dígitos de n (ou seja, s = 7 + 3 + 1 + 4 = 15)
2º: calcular o resto r da divisão de s por 10 (ou seja, r = 5)
Número da conta: 007314-5
*/

#include <stdio.h>

int main(void) {
    int n, sum=0, rest, x;

    printf("Number? ");
    scanf("%d", &n);
    x = n;

    while (n > 0) {
        sum += (n % 10);
        n /= 10; 
    }
    rest = sum % 10;
    printf("Account number: %06d-%d", x, rest);

    return 0;
}
