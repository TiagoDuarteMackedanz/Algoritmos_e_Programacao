/*Escreva um algoritmo para ler 3 valores e escrever a soma dos 2 maiores. Considere que os usuário
não informará valores iguais.*/

#include <stdio.h>

float main()
{
 	float valor1, valor2, valor3, soma;
 	printf("\nDigite 3 Valores para Somar os 2 Maiores.\n");
 	printf("\nDigite o Valor 1: ");
 		scanf ("%f", &valor1);
 	printf("\nDigite o Valor 2: ");
 		scanf ("%f", &valor2);
 	printf("\nDigite o Valor 3: ");
 		scanf ("%f", &valor3);
 		
	if ((valor1>valor2) && (valor2>valor3)){
		soma=valor1+valor2;
 		printf ("\nA Soma entre os 2 Maiores e: %.2f", soma);
 		}
	if ((valor1>valor2) && (valor2<valor3)){
		soma=valor1+valor3;
 		printf ("\nA Soma entre os 2 Maiores e: %.2f", soma);
 		}
 	if ((valor1<valor2) && (valor1>valor3)){
		soma=valor2+valor1;
 		printf ("\nA Soma entre os 2 Maiores e: %.2f", soma);
 		}
 	if ((valor1<valor2) && (valor1<valor3)){
		soma=valor2+valor3;
 		printf ("\nA Soma entre os 2 Maiores e: %.2f", soma);
 		}
 	}


 	
