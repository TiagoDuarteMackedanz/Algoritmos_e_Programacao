/*Escreva um algoritmo para ler o n�mero de lados de um pol�gono regular, e a medida do lado(a
medida do lado s� deve ser lida para pol�gono com 3 ou 4 lados). Calcular e imprimir o seguinte:
Se o n�mero de lados for igual a 3 escrever TRI�NGULO e o valor do seu per�metro.
Se o n�mero de lados for igual a 4 escrever QUADRADO e o valor da sua �rea.
Se o n�mero de lados for igual a 5 escrever PENT�GONO.
OBS: Considere que o usu�rio s� informar� os valores 3,4 ou 5.*/

#include <stdio.h>

int main()
{
 	int lados, mlado, triangulo, quadrado;

 	printf("Digite o numero de lados de Poligono Regular:\n");
 	printf("\nNumero de Lados: ");
 		scanf ("%d", &lados);
 	
 	if (lados==3){
		printf ("\nInsira a Medida do Lado: ");
		scanf ("%d", &mlado);
		triangulo=(lados*mlado);	
		printf ("\nTriangulo, seu Perimetro: %d ", triangulo);	
 		}

	 if (lados==4){
		printf ("\nInsira a Medida do Lado ");
		scanf ("%d", &mlado);
		quadrado=(lados*mlado);
		printf ("\nQuadrado, sua Area: %d ", quadrado);
 		}
 	else{
 		 	if (lados==5){
		printf ("\nPentagono");
 		}
	 }
}
