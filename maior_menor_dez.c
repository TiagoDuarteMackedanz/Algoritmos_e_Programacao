/*Ler um valor e escrever a mensagem É MAIOR QUE 10! se o valor lido for maior que 10, caso contrário escrever NÃO É MAIOR QUE 10!*/

#include <stdio.h>

float main()

{
 	float num1;
 	printf("\nDigite um Numero: ");
 		scanf("%f", &num1);
 		if (num1>10){
 			printf("E MAIOR QUE 10!");
		 }
		else{
			printf("NAO E MAIOR QUE 10!");
		}
}
