/*Ler dois valores (considere que não serão lidos valores iguais) e escrevê-los em ordem crescente.*/

#include <stdio.h>

float main()

{
 	float num1,num2;
 	printf("\nDigite Dois Numeros.");
 	printf("\nDigite o Primeiro: ");
 		scanf("%f", &num1);
 	printf("\nDigite o Segundo: ");
 		scanf("%f", &num2);
 		if (num1==num2){
 			printf("\nSao Iguais!");
		 }
		else{
		
 		if (num1<num2){
 			printf("\nA Ordem Crescente e: %.0f,%.0f", num1,num2);
		 }
		else{
			printf("\nA Ordem Crescente e: %.0f,%.0f", num2,num1);
		}
	}
	
}
