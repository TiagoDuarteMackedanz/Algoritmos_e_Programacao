/*Fa�a um algoritmo que leia um n�mero inteiro e mostre uma mensagem indicando se este n�mero � par ou �mpar, e se � positivo, negativo ou zero.*/

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
	if (numero%2==0){
		printf("\nNumero Par!");
	}	
	else{
		printf("\nNumero Impar!");
	}
}
