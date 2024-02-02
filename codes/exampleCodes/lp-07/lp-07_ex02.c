/*
en-US: EXAMPLE_02.C - Example 02. Bubble sort implementation
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_02.C - Exemplo 02. Implementação do bubble sort
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-07.pdf
*/

void bsort(int vector[], int size_vector) {
    for(int i = 1; i < (size_vector - 1); i++) 
        for(int j = 0; j < (size_vector - i); j++)
            if(vector[j] > vector[j + 1])
                exchange(vector, j, j+1);
}