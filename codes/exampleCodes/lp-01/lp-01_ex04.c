/*
en-US: EXAMPLE_04.C - Example 04. Size of a type
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_04.C - Exemplo 04. Tamanho de um tipo
_____________________________________________________________________________________________________________________

obs: 'sizeof' - Reports the amount of memory (in Bytes) used by a data type
*/

#include <stdio.h>

int main(void) {
	char v = 'A';
	
	printf("int: %d\n", sizeof(int));
	printf("float: %d\n", sizeof(float));
	printf("double: %d\n", sizeof(double));
	printf("char: %d\n", sizeof(char));
	printf("void: %d\n", sizeof(void));
	printf("%d\n", sizeof(1.2));
	printf("%d\n", sizeof(v));
	printf("%d\n", sizeof(v + 1));
	
	return 0;
}
