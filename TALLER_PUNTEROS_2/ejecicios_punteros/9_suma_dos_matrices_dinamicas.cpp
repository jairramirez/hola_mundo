#include <stdio.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
/*Fecha: Marzo 17 de 2018
Realizado por: Jair Ram�rez Vel�squez
Programa que calcula la suma de dos matrices dinamicas*/
void pedirDatos();
void sumarMatriz(int **,int **,int,int);
void mostrarMatrizSuma(int **,int ,int);
int **pMatrizUno,fil,col;
int **pMatrizDos;	
int main()
{
	pedirDatos();
	sumarMatriz(pMatrizUno,pMatrizDos,fil,col);
	mostrarMatrizSuma(pMatrizUno,fil,col);
	for(int i=0;i<fil;i++)
	{
		delete[] pMatrizUno[i];
	}
	delete[] pMatrizUno;
	
	for(int i=0;i<fil;i++)
	{
		delete[] pMatrizDos[i];
	}
	delete[] pMatrizDos;
	
	return 0;
}

void pedirDatos()
{
	int i,j;
	printf("Ingrese el numero de filas \n");
	scanf("%d",&fil);
	printf("Ingrese el numero de col \n");
	scanf("%d",&col);
	
	pMatrizUno= new int *[fil];
	for(i=0;i<fil;i++)
	{
		pMatrizUno[i]= new int[col];
	}
	
	printf("Ingrese los elementos de la matriz uno \n");
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Digite el numero de la posici�n [%d][%d] \n",i,j);
			scanf("%d",&*(*(pMatrizUno+i)+j));
		}
	}
	
	
	pMatrizDos= new int *[fil];
	for(int i=0;i<fil;i++)
	{
		pMatrizDos[i]= new int[col];
	}
	
	
	printf("Ingrese los elementos de la matriz dos \n");
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Digite el numero de la posici�n [%d] [%d] \n",i,j);
			scanf("%d",&*(*(pMatrizDos+i)+j));
		}
	}
	printf("mostrando matriz uno \n");
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d  ",*(*(pMatrizUno+i)+j));
		}
		printf("\n");
	}
	printf("mostrando matriz dos \n");
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d  ",*(*(pMatrizDos+i)+j));
		}
		printf("\n");
	}
}

void sumarMatriz(int **pMatrizUno,int **pMatrizDos,int fil,int col)
{
	int i,j;
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++)
		{
			*(*(pMatrizUno+i)+j)+=*(*(pMatrizDos+i)+j);
		}
	}
}
void mostrarMatrizSuma(int **pMatrizUno,int fil ,int col)
{
	int i,j;
	printf("La suma de las dos matrices es: \n");
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %d  ",*(*(pMatrizUno+i)+j));
		}
		printf("\n");
	}
}
