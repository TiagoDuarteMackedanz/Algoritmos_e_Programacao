/*Escreva um algoritmo para ler o número de lados de um polígono regular, e a medida do lado(a
medida do lado só deve ser lida para polígono com 3 ou 4 lados). Calcular e imprimir o seguinte:
Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor do seu perímetro.
Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área.
Se o número de lados for igual a 5 escrever PENTÁGONO.
OBS: Considere que o usuário só informará os valores 3,4 ou 5.*/

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
