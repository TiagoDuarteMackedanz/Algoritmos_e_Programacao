/*Escreva um algoritmo para ler as notas da 1a e 2a avaliações de um aluno, calcular a média e escrever
se este aluno foi APROVADO, REPROVADO ou se está em EXAME. Escrever também a média
calculada. OBS: Para ter direito ao exame o aluno deve obter média mínima 3.0*/

#include <stdio.h>

float main()
{
 	float nota1, nota2, media;

 	printf("Digite as notas das Avaliacoes:\n");
 	printf("\nDigite a nota da Avaliacao 1: ");
 		scanf ("%f", &nota1);
 	printf("\nDigite a nota da Avaliacao 2: ");
 		scanf ("%f", &nota2);
 		
 	media=(nota1+nota2)/2;
 	
 	if (media>=6){
		printf ("\nSuas Notas: %.2f, %.2f ", nota1, nota2);
 		printf ("\nMedia Final: %.2f, VOCE FOI APROVADO!", media);
 	}
 	if ((media>=3) && (media<=5.9)){
		printf ("\nSuas Notas: %.2f, %.2f ", nota1, nota2);
 		printf ("\nMedia Final: %.2f,  VOCE ESTA EM EXAME!", media);
 	}
 	 	if (media<3){
		printf ("\nSuas Notas: %.2f, %.2f ", nota1, nota2);
 		printf ("\nMedia Final: %.2f,  VOCE FOI REPROVADO!", media);
 	}
} 
