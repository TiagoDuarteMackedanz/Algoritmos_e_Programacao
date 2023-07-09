/*Construir um algoritmo que dados dois números escreva o maior*/

#include <stdio.h>

float main ()
{
	float num1, num2;
	printf("Digite Dois Numeros");
	printf("\nDigite o Primeiro: ");
	scanf("\n %f", &num1);
	printf("\nDigite o Segundo: ");
	scanf("\n %f", &num2);
	
	if (num1 > num2){
		printf("\nO Primeiro Numero e Maior: %f", num1);
		}
	else{
		printf("\nO Segundo Numero e Maior: %f", num2);
		}
}
