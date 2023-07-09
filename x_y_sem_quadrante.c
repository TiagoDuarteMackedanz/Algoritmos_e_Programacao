/*Escreva um algoritmo para ler as coordenadas (X,Y) de um ponto no sistema cartesiano e escrever o
quadrante ao qual o ponto pertence. Se o ponto estiver sobre os eixos, ou na origem, escrever NÃO ESTÁ
EM NENHUM QUADRANTE. Considere que o usuário poderá informar qualquer valor para as
coordenadas.*/

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
			if(x==0){
				printf("\nNenhum Quadrante.");
		    }
			else{
			if(y==0){
				printf("\nNenhum Quadrante.");
				}
			 }			
}
