/*
en-US: EXAMPLE_01.C - Example 01. determines whether a person is obese 
- Statement: A person is obese if their BMI (weight divided by height squared) is greater than 30.
Given a person's weight and height, tell whether they are obese
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_01.C - Exemplo 01. determina se uma pessoa está obesa
- Enunciado: Uma pessoa está obesa se seu IMC (peso dividido pela altura ao quadrado) é superior a 30.
Dados o peso e a altura de uma pessoa, informe se ela está obesa
_____________________________________________________________________________________________________________________

obs: bmi = body mass index | imc = índice de massa corporal
*/

#include <stdio.h>	// standard input and output
#include <math.h>	// mathematical functions

int main(void) {
	// variable declaration
	float weight, height, bmi;	
	
	// commands
	printf("What is the weight and height? ");
	scanf("%f %f", &weight, &height);
	bmi = weight / pow(height, 2);	// bmi = weight / (height * height);
	printf("BMI = %.1f\n", bmi);
	if(bmi <= 30) printf("Not obese!\n");
	else printf("Is obese!\n");
	
	// return from main function
	return 0;
}

