/*
en-US: EXAMPLE_11.C - Example 11. Function with variable number of parameters
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_11.C - Exemplo 11. Função com número variável de parâmetros
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-10.pdf
*/

#include <stdio.h>

double average(int n, ...) {
    double s = 0;
    double *p = (double *)(&n + 1);

    for(int i = 0; i < n; i++) s += p[i];

    return (s / n);
}

int main(void) {
    double m = average(4, 2.5, 6.7, 1.3, 1.5);

    printf("Average: %.1lf\n", m);

    return 0;
}

// A more portable implementation can be created with the macros declared in 'stdarg.h'
#include <stdio.h>
#include <stdarg.h>     // provides support for handling functions that accept a variable number of arguments

double average(int n, ...) {
    double s = 0;

    // This line declares a variable of type va_list, which is used to store information about variable arguments
    va_list args;   
    
    // This line initializes the args variable to begin processing variable arguments. va_start is a macro that takes two arguments: the first is the args variable and the second is the last known fixed argument (n)
    va_start(args, n);  

    for(int i = 0; i < n; i++)
        // This line accesses each variable argument in the list. va_arg is a macro that takes two arguments: the variable args and the type of the expected argument (in this case, double). It returns the value of the next argument in the list and advances the current position in the argument list
        s += va_arg(args, double);
    
    // This line ends the processing of variable arguments. va_end is a macro that takes the variable args and clears any resources associated with it
    va_end(args);

    return (s / n);
}

int main(void) {
    double m = average(4, 2.5, 6.7, 1.3, 1.5);

    printf("Average: %.1lf\n", m);

    return 0;
}
