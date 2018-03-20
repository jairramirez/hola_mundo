#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Fecha: Marzo 19 de 2018
Realizado por: Jair Ramírez
Programa que suma dos vectores y muestra su resultado*/

int main()
{
	int i,tam=0;
	int numeros;
	int *pnumeros;
	int num;
	int *pnum;
	int suma;
	int *psuma;
	printf("Ingrese tamanio  de los vectores  \n");
	scanf("%d",&tam);
	numeros=tam;
	num=tam;
	suma=tam;
	pnumeros=new int [numeros];
	for(i=0;i<numeros;i++)
	{
		printf("Ingrese elementos del vector uno  \n");
		scanf("%d",&pnumeros[i]);
	}
	printf("Imprimiendo los elementos del vector uno \n");
	for(i=0;i<numeros;i++)
	{
		printf("%d \n",pnumeros[i]);
	}
	
	pnum=new int [num];
	for(i=0;i<num;i++)
	{
		printf("Ingrese elementos del vector dos  \n");
		scanf("%d",&pnum[i]);
	}
	printf("Imprimiendo los elementos del vector dos \n");
	for(i=0;i<num;i++)
	{
		printf("%d \n",pnum[i]);
	}
	
	printf("SUMANDO VECTORES \n");
	
	psuma=new int [suma];
	for(i=0;i<suma;i++)
	{
	psuma[i]=pnumeros[i]+pnum[i];	
	}
	for(i=0;i<suma;i++)
	{
		printf("%d \n",psuma[i]);
	}
	delete []psuma;
	delete []pnumeros;
	delete []pnum;
	return 0;
}


