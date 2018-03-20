#include <stdio.h>
#include <stdlib.h>
/*Febrero 25 de 2018
Realizado por: Jair Ramírez Velásquez
Programa que en una funcion pide n numeros al usuario y los almacena en un arreglo dinamico
posteriormente en otra funcion busca un numero en particular*/
void pedirDatos();
void buscarNumero(int *,int);
int numeros;
int *pnumeros;

int main() 
{
	pedirDatos();
	buscarNumero(pnumeros,numeros);
	delete[] pnumeros;
	return 0;
}
void pedirDatos()
{
	int i;
	
	printf("ingrese tamanio del vector \n");
	scanf("%d",&numeros);
	pnumeros=new int [numeros];
	printf("Ingrese numeros \n");
	for(i=0;i<numeros;i++)
	{
		scanf("%d",&*(pnumeros+i));
		
	}
}
void buscarNumero(int *pnumeros,int numeros)
{
	int num;
	int i=0;
	char bandera='f';
	printf("Ingrese el numero a buscar \n");
	scanf("%d",&num);
	
	while((bandera=='f')&&(i<numeros))
	{
		
		if(*(pnumeros+i)==num)
		{
			bandera='v';
			
		}
		i++;
	}
	if(bandera=='f')
	{
		printf("El numero buscado no esta en el arreglo \n");
	}
	else if(bandera=='v')
	{
		printf("El numero se encontro en la posicion %d \n",i-1);
	}
}
