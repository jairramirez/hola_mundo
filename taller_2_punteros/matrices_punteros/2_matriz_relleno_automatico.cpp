#include <stdio.h>
/*febrero 11 de 2018
Realizado por: Jair Ramírez Velásquez
Programa que crea una matriz de 3 x 3 y la rellena automaticamente
*/
int main()
{
	int matriz[100][100];
	int fil=3;
	int col=3;
	int i,j;
	int acumulador=1;
	int* pm=&matriz[0][0];
	
	
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			*(pm+i+j *col)=acumulador;
			acumulador++;
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
	return 0;
}



