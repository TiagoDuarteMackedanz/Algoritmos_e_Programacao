/*Fa�a um programa que leia 10 n�meros, considere que ser�o lidos n�meros
inteiros e positivos. Se o n�mero lido for menor que 7, calcule o seu fatorial. Se
for maior ou igual a 7, calcule a soma de 1 at� o n�mero lido.*/

#include <stdio.h>

int main ()
{

int numero, contador, fatorial, soma, soma1;

contador = 1;
soma = 1;

	while ( contador <= 10){ 
		printf("\nDigite um Numero: ");
		scanf ("%d", &numero);	
				
	if(numero>=7){
	do{
		printf("%d", soma);
		soma++;
	}
		while (soma<=numero);
		soma=0;	
	}
else{
	if(numero<7){
	for(fatorial=1; numero>1; numero=numero-1){
	fatorial = (fatorial*numero);
	printf("\nCalculo Fatorial: %d ", fatorial);
	}
	}
	contador++;
}
	}
}

