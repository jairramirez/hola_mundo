#include <stdio.h>
#include <math.h>
/*febrero 10 de 2018
Realizado por: Jair Ramírez Velásquez
Programa que se ingresan 4 numeros y muestra en la primera columna el numero ingresado por el usuario
en la segunda el cuadrado del numero, en la trecera el cubo y en la cuarta el numero elevado a la cuarta
*/
int main()
{
	int i,j,numeros[4][4];
	int numero;
	int* pm=&numeros[0][0];
	int fil=4;
	int col=4;
	
	printf("Ingrese numeros del arreglo \n");
	
	for(i=0;i<fil;i++)
	{
		scanf("%d",&numero);
		for(j=0;j<col;j++)
		{
			*(pm+i+j *col)=numero;
			if(j==1)
			{
				*(pm+i+j *col)= pow(*(pm+i+j *col),2);
			}
			if(j==2)
			{
				*(pm+i+j *col)=pow(*(pm+i+j *col),3);
			}
			if(j==3)
			{
				*(pm+i+j *col)=pow(*(pm+i+j *col),4);
			}
		}
	}
	printf("Mostrando  matriz \n");
	printf("numero cuadrado cubo\tcuarta \n");
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d \t",*(pm+i+j *col));
			
		}
		printf("\n");
	}
	return 0;
}

