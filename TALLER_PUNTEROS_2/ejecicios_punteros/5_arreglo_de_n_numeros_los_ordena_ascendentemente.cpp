#include <stdio.h>
#include <stdlib.h>
/*Febrero 25 de 2018
Realizado por: Jair Ramírez Velásquez
Programa que pide n numeros al usuario y los almacena en un arreglo dinamico
los ordena en forma ascendente y los muestra en pantalla*/
int main() 
{
	int i,j;
	int numeros;
	int *pnumeros;
	int aux;
	printf("ingrese tamanio del vector \n");
	scanf("%d",&numeros);
	pnumeros=new int [numeros];
	
	printf("Ingrese numeros \n");
	for(i=0;i<numeros;i++)
	{
		scanf("%d",&*(pnumeros+i));
		
	}
	for(i=0;i<numeros;i++)
	{
		for(j=0;j<numeros;j++)
			if(*(pnumeros+j)>*(pnumeros+j+1))
		{
			aux=*(pnumeros+j);
			*(pnumeros+j)=*(pnumeros+j+1);
			*(pnumeros+j+1)=aux;
			
		}
			
	}
	
	for(i=0;i<numeros;i++)
	{
		printf("%d ",*(pnumeros+i));
	}
	
	return 0;
}

