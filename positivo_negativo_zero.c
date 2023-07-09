/*Ler um valor e escrever se é positivo ou negativo (considere o valor zero como positivo).*/

#include <stdio.h>

int main ()
{
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);

	if (numero>=0){
		printf("\nO Numero e Positivo: %d", numero);
	}
	else{
	printf("\nO Numero e Negativo: %d", numero);
}
}
