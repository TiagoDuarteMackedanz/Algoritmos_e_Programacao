/*Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada
de 10 a 1 do valor lido.*/

#include <stdio.h>

int main()
{
	int tabuada, multiplicando;
    	printf("\nDigite um Valor para a Tabuada que Voce Deseja: ");
    	scanf("%d", &tabuada);
	if(tabuada<=10){
    for(multiplicando=1; multiplicando<=10; multiplicando++){

        printf("%dx%d = %d \n", multiplicando, tabuada, multiplicando * tabuada);
    }
}
}

