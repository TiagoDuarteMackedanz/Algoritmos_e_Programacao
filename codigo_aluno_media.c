/*Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a média ponderada do aluno, considerando que o peso para a maior nota seja 4 
e para as duas restantes, 3. Mostre o código do aluno, suas três notas, a média calculada e a mensagem 
"APROVADO" se a média for maior ou igual a 5 e "REPROVADO" caso contrário.*/

#include <stdio.h>

float main()
{
 	float nota1, nota2, nota3, media, matricula;

 	printf("\nDigite o numero da Matricula para prosseguir: ");
 		scanf("%f", &matricula);
 		if (matricula>0){
 			printf("\nBem Vindo, Aluno!");
		 }
 	printf("\nDigite 3 notas, sendo a Primeira Peso 4 e as demais Peso 3.");
 	printf("\nDigite a nota de Peso 4: ");
 		scanf ("%f", &nota1);
 	printf("\nDigite a nota de Peso 3: ");
 		scanf ("%f", &nota2);
 	printf("\nDigite a nota de Peso 3: ");
 		scanf ("%f", &nota3);
 		
 	media=(nota1*4+nota2*3+nota3*3)/10;
 	
 	if (media>=5){
 		printf ("\nAluno: %.0f", matricula);
		printf ("\nSuas Notas: %.2f, %.2f, %.2f", nota1, nota2, nota3);
 		printf ("\nMedia Final: %.2f, APROVADO!", media);	
	 }
	 else{
	 	printf ("\nAluno: %.0f", matricula);
		printf ("\nSuas Notas: %.2f, %.2f, %.2f", nota1, nota2, nota3);
	 	printf ("\nMedia Final: %.2f, REPROVADO!", media);
	 }

} 
