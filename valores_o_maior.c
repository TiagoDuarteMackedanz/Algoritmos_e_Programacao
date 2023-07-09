/*Escreva um algoritmo para ler 3 valores e escrever o maior deles. Considere que os usuário não
informará valores iguais.*/

#include <stdio.h>

float main()
{
 	float valor1, valor2, valor3;
 	printf("\nDigite 3 Valores para Saber qual e o Maior.");
 	printf("\nDigite o Valor 1: ");
 		scanf ("%f", &valor1);
 	printf("\nDigite o Valor 2: ");
 		scanf ("%f", &valor2);
 	printf("\nDigite o Valor 3: ");
 		scanf ("%f", &valor3);
 		
 		if ((valor1>valor2) && (valor1>valor3)){
 		printf ("\nO Maior e o numero: %.2f", valor1);
 		}
		if((valor2>valor1) && (valor2>valor3)){
		printf ("\nO Maior e o numero: %.2f", valor2);
		}
		if((valor3>valor1) && (valor3>valor2)){
		printf ("\nO Maior e o numero: %.2f", valor3);
		}

 	}

