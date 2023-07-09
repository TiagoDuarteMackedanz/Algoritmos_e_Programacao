/*Escreva um algoritmo para ler as coordenadas (X,Y) de um ponto no sistema cartesiano e escrever o
quadrante ao qual o ponto pertence. Considere que o usuário não informará nenhuma coordenada igual a
zero.*/

#include <stdio.h>

int main() 
{
    int x, y;
    
    printf("Digite o Valor de X e Y.\n");
 	printf("\nDigite o Valor de X: ");
 		scanf ("%d", &x);
 	printf("\nDigite o Valor de Y: ");
 		scanf ("%d", &y);
 		
            if((x>0) && (y>0)){
                printf("\nPrimeiro Quadrante.");
            }
            if((x<0) && (y>0)){
            	printf("\nSegundo Quadrante.");
        	}
            if((x<0) && (y<0)){
            	printf("\nTerceiro Quadrante.");	
			}
            if((x>0) && (y<0)){
            	printf("\nQuarto Quadrante.");	
			}
}
