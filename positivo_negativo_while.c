/*Escreva um algoritmo para repetir a leitura de um n�mero enquanto o valor
fornecido for diferente de 0. Para cada n�mero fornecido, imprimir se ele �
NEGATIVO ou POSITIVO. Quando o n�mero 0 for fornecido a repeti��o deve
ser encerrada sem imprimir mensagem alguma.*/

#include <stdio.h>

int main ()
{
	
int numero;

	do{
		printf("Digite um numero: ");
		scanf ("%d", &numero);			
	if(numero>0){
		printf("POSITIVO!\n");
	}
	if(numero<0){
		printf("NEGATIVO!\n");
	}
	}
	while(numero!=0);
}
