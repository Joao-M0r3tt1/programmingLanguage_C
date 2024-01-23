/*
en-US: EXAMPLE_05.C - Example 05. Simulation by execution flow for factorial(5) 
- Statement: showing the functioning of the factorial recursive function(n), from a "computational" point of view
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_05.C - Exemplo 05. Simulação por fluxo de execução para fatorial(5)
- Enunciado: mostrando o funcionamento da função recursiva fatorial(n), de um ponto de vista "computacional"
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-05.pdf
*/

int factorial(int n) {
    if(n == 0) return 1;                // base
    else return n * factorial(n - 1);   // step
}