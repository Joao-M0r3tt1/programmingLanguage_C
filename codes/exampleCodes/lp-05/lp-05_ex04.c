/*
en-US: EXAMPLE_04.C - Example 04. Substitution simulation for factorial(5) 
- Statement: showing the functioning of the factorial recursive function(n), from a "mathematical" point of view
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_04.C - Exemplo 04. Simulação por substituição para fatorial(5)
- Enunciado: mostrando o funcionamento da função recursiva fatorial(n), de um ponto de vista "matemático"
*/

int factorial(int n) {
    if(n == 0) return 1;                // base
    else return n * factorial(n - 1);   // step
}

/*

factorial(5)
= 5 * factorial(4)
= 5 * 4 * factorial(3)
= 5 * 4 * 3 * factorial(2)
= 5 * 4 * 3 * 2 * factorial(1)
= 5 * 4 * 3 * 2 * 1 * factorial(0)
= 5 * 4 * 3 * 2 * 1 * 1 = 120

*/