/*Escreva um algoritmo para ler 2 valores e uma das seguintes operações a serem executadas
(codificada da seguinte forma: 1.Adição, 2.Subtração, 3.Divisão, 4.Multiplicação). Calcular e escrever o
resultado dessa operação sobre os dois valores lidos.*/

#include <stdio.h>

float main()
{
 	float valor1, valor2, operacao, adicao, subtracao, divisao, multiplicacao;

 	printf("Digite 2 Valores e a Oprecao Desejada:\n");
 	printf("\nDigite o Primeiro Valor: ");
 		scanf ("%f", &valor1);
 	printf("\nDigite o Segundo Valor: ");
 		scanf ("%f", &valor2);
 	printf("\nDigite o Numero da Operacao Aritimetica Desejada ");
 	printf("\n1-Adicao, 2-Subtracao, 3-Divisao, 4-Multiplicacao: ");
 		scanf ("%f", &operacao);
 	
 	if (operacao==1){
		printf ("\nVoce escolheu Adicao: ");
		adicao=(valor1+valor2);	
		printf ("\nA Soma dos Valores deu: %.2f ", adicao);
 		}
 	if (operacao==2){
		printf ("\nVoce escolheu Subtracao: ");
		subtracao=(valor1-valor2);	
		printf ("\nA Subtracao dos Valores deu: %.2f ", subtracao);
 		}
 	if (operacao==3){
		printf ("\nVoce escolheu Divisao: ");
		divisao=(valor1/valor2);	
		printf ("\nA Divisao dos Valores deu: %.2f ", divisao);
 		}
 	if (operacao==4){
		printf ("\nVoce escolheu Multiplicacao: ");
		multiplicacao=(valor1*valor2);	
		printf ("\nA Multiplicacao dos Valores deu: %.2f ", multiplicacao);
 		}
}
