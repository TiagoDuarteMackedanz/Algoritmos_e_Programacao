/*Acrescente as seguintes mensagens a solução do exercício anterior conforme o caso.
Caso o número de lados seja inferior a 3 escrever NÃO E’ UM POLÍGONO.
Caso o número de lados seja superior a 5 escrever POLÍGONO NÃO IDENTIFICADO.
OBS: Considere que o usuário poderá informar qualquer valor para o número de lados.*/

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
