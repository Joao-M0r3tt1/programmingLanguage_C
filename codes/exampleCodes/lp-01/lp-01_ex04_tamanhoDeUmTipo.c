/* TAMANHODEUMTIPO.C - Tamanho de um tipo */
/* 'sizeof' - Informa a quantidade de mem�ria (em Bytes) usada por um tipo de dados */

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
