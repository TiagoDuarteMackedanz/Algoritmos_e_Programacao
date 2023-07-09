/*Escreva um algoritmo para ler o número de gols marcados pelo Grêmio e o número de gols marcados
pelo Inter em um GRENAL. Escrever o nome do vencedor. Caso não haja vencedor deverá ser impresso a
palavra EMPATE.*/

#include <stdio.h>

int main()
{
 	int gremio, inter;

 	printf("Digite o numero de Gols marcados pelas equipes:\n");
 	printf("\nGols Marcados pelo Gremio: ");
 		scanf ("%d", &gremio);
 	printf("\nGols Marcados pelo Inter: ");
 		scanf ("%d", &inter);
 	
 	if (gremio>inter){
		printf ("\nO Vencedor foi o Gremio por %d x %d ", gremio, inter);
 	}
 	 	if (gremio<inter){
		printf ("\nO Vencedor foi o Inter por %d x %d ", inter, gremio);
 	}
 	 	else{
		  if (gremio=inter){
		printf ("\nO Jogo ficou no empate por %d x %d ", gremio, inter);
 	}
 	}
}
