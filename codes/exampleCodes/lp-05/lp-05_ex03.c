/*
en-US: EXAMPLE_03.C - Example 03. Factorial problem 
- Statement: create the recursive function factorial(n), which calculates the factorial of a natural number n
                
               {  1,                       if n == 0
factorial(n) = {   
               {  1 * 2 * 3 * ... * n,     if n > 0
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_03.C - Exemplo 03. Problema do fatorial
- Enunciado: crie a função recursiva fatorial(n), que calcula o fatorial de um número natural n 

              {  1,                       se n == 0
fatorial(n) = {   
              {  1 * 2 * 3 * ... * n,     se n > 0
*/

#include <stdio.h>

int factorial(int n) {
    if(n == 0) return 1;                // base
    else return n * factorial(n - 1);   // step
}