/*
en-US: EXAMPLE_01.C - Example 01. Declaration, initiation and access
- Statement: - When declaring a pointer, we need to prefix its name with an Asterisk
             - The type of the pointer must be compatible with that of the variable it will point to
             - If a pointer p holds the address of a variable v, we say that 'p points to v'
             - If a pointer p points to a variable v, then '*p represents the value of v
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_01.C - Exemplo 01. Declaração, iniciação e acesso
- Enunciado: - Ao declarar um ponteiro, precisamos prefixar o seu nome com um Asterisco
             - O tipo do ponteiro deve ser compatível com aquele da variável que ele irá apontar
             - Se um ponteiro p guarda o endereço de uma variável v, dizemos que 'p aponta v'
             - Se um ponteiro p aponta uma variável v, então '*p representa o valor de v'
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-10.pdf
*/

#include <stdio.h>

int main(void) {
    int v = 5, *p;  // *p - content operator

    p = &v;
    printf("Saved value: %p\n", p);         // 0019FF44  -  fictitious
    printf("Indicated value: %d\n", *p);    // 5

    return 0;
}