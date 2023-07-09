/*Faça um algoritmo que leia um número e mostre se ele é positivo, negativo ou zero.*/

#include <stdio.h>

int main ()
{
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);

	if (numero>0){
		printf("\nO Numero e Positivo: %d", numero);
	}
	if (numero<0){
	printf("\nO Numero e Negativo: %d", numero);
	}
	if (numero==0){
	printf("\nO Numero e Zero: %d", numero);	
	}	
}
