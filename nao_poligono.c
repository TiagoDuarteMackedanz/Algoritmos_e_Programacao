/*Acrescente as seguintes mensagens a solu��o do exerc�cio anterior conforme o caso.
Caso o n�mero de lados seja inferior a 3 escrever N�O E� UM POL�GONO.
Caso o n�mero de lados seja superior a 5 escrever POL�GONO N�O IDENTIFICADO.
OBS: Considere que o usu�rio poder� informar qualquer valor para o n�mero de lados.*/

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
		triangulo= (lados*mlado);	
		printf ("\nTriangulo, seu Perimetro: %d ", triangulo);	
 		}
 	else{
 		if(lados<3){
 		printf ("\nNao e um Poligono!");	
		 }
	 }

	 if (lados==4){
		printf ("\nInsira a Medida do Lado ");
		scanf ("%d", &mlado);
		quadrado=(lados*mlado);
		printf ("\nQuadrado, sua Area: %d ", quadrado);
 		}
 	else{
 		 	if (lados==5){
		printf ("\nPentagono!");
	 }
	 }
	if(lados>5){
 		printf ("\nPoligono nao Identificado!");
 		}
}
