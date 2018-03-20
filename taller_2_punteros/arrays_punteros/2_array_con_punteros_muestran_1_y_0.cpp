#include <stdio.h>
#include <stdlib.h>
/*febrero 23 de 2018
Realizado por: Jair Ramírez Velásquez
Programa que utiliza punteros, se ingresan dos valores y  de acuerdo a los valores
ingresados  muestra en pantalla un arreglo de num1 x num 2
*/
int main() 
{
	int matriz[100][100];
	int* pm=&matriz[0][0];
	int fil,col;
	int numero,i,j;
	
	printf("Ingrese dos numeros \n");
	scanf("%d %d",&fil,&col);
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			
			*(pm+i+j *col)=numero;
		}
	}
	printf("Mostrando matriz \n");
	
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i!=j)
			{
				*(pm+i+j *col)=1;	
			}
			else 
			{
				*(pm+i+j *col)=0;
			} 
			printf("%d\t",*(pm+i+j *col));
		}
		printf("\n");
	}
	
	return 0;
}



