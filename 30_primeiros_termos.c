/*Faça um algoritmo que escreva os 30 primeiros termos da série 1,3,9,27...*/

#include <stdio.h>

float main ()
{

float cont, termo;

	termo=1;		
	for (cont=1; cont<=30; cont++){
	printf("Valor do Termo: %.2f \n", termo);
	termo=termo*3;

}
}



