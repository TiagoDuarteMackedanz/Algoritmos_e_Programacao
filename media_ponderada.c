/*Fa�a um algoritmo que leia tr�s notas de um aluno, calcule e escreva a m�dia final deste aluno. Considerar que a m�dia � ponderada e 
que o peso das notas � 2, 3 e 5.*/

#include <stdio.h>

float main()
{
 	float nota1, nota2, nota3, media;
	 	
 	printf("\nDigite 3 notas, sendo a Primeira Peso 2, a Segunda Peso 3 e a Terceira peso 5.");
 	printf("\nDigite a nota de Peso 2: ");
 		scanf ("%f", &nota1);
 	printf("\nDigite a nota de Peso 3: ");
 		scanf ("%f", &nota2);
 	printf("\nDigite a nota de Peso 5: ");
 		scanf ("%f", &nota3);
 		
 	media=(nota1*2+nota2*3+nota3*5)/10;
 	
 	printf("\nSua Media e: %.2f ", media);
 }
