#include <stdio.h>
/*febrero 11 de 2018
Realizado por: Jair Ramírez Velásquez
Programa que crea una matriz de 3 x 3 y muestra la matriz y la suma de cada una de sus posiciones
*/
int main()
{
	int matriz[100][100];
	int i,j;
	int suma=0;
	int* pm=&matriz[0][0];
	int numero;
	int fil=3;
	int col=3;
	printf("Ingrese numeros \n");
	
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&numero);
			*(pm+i+j *col)=numero;
			suma=suma+*(pm+i+j *col);
		}
	}
	printf("Mostrando matriz \n");
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{  
			
			printf("%d ",*(pm+i+j *col));
			
		}
		printf("\n");
	}
	printf("la suma de los elementos de la matriz es %d",suma);
	return 0;
}




