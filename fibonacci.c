/*A serie de Fibonacci e uma sequencia de numeros em que os dois primeiros sao
0 e 1 e a partir dai cada numero e a soma dos anteriores, ou seja
..! = ..!!! + ..!!!
Faca um algoritmo que escreve os x primeiros termos da serie e a soma destes
termos.*/

#include <stdio.h>

int main()
{
    int termos, soma, f0, f1, f2, f3, f4, contador;
    
    	contador=1;
    	f0=0;
		f1=1;

		while(contador<=20){
		printf("A soma dos Primeiros termos da Serie. \n");
		printf("O Valor de TN-1: %d \n", f0);
		printf("O Valor de TN-2: %d \n", f1);
		soma=f0+f1;
		printf("O Valor de TN-1 + TN-2: %d \n", soma);
		f0=f1;
		f1=soma;
		contador++;
	}
	}
