/*Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. 
Considerar ano com 365 dias e mês com 30 dias.*/

#include <stdio.h>

float main ()
{
	float idade,ano,meses,dias;
	printf("Escreva sua Idade em Anos: ");
  		scanf("%f", &ano);
 	printf("Escreva sua Idade em Meses: ");
  		scanf("%f", &meses);
  	printf("Escreva sua Idade em Dias: ");
  		scanf("%f", &dias);
  		
  	idade=(dias+(ano*365)+(meses*30));
 	printf("Sua Idade em Dias e %.2f ", idade);	
}
