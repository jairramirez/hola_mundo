#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
/*
Fecha: Marzo 19 de 2018
Realizado por: Jair Ramírez
Programa que crea una matriz y reemplaza un numero de la matriz*/
void mostrarm(int **, int , int);
void modificarMatiz(int **, int, int);
int **pMatriz,fila,col;
int main() {
	printf("\nIngrese tamanio matriz:\n");
	scanf("%d%d",&fila,&col);
	
	pMatriz=new int *[fila];
	
	for(int i=0;i<fila;i++){
		pMatriz[i]=new int[col]; 
	}
	
	printf("Ingrese los elementos de la matriz uno \n");
	for(int i=0;i<fila;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("Digite el numero de la posición [%d][%d] \n",i,j);
			scanf("%d",&*(*(pMatriz+i)+j));
		}
	}

	mostrarm(pMatriz,fila,col);
	modificarMatiz(pMatriz,fila,col);
	for(int i=0;i<fila;i++){
		delete[] pMatriz[i]; 
	}
	
	
	delete[] pMatriz; 
	return 0;
	
}

void mostrarm(int **pun,int f,int c){
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			//printf("%d",matriz[i][j]);
			printf("%d  ",*(*(pun+i)+j));
		}
		printf("\n");
	} 
}
void modificarMatiz(int **pun, int f, int c)
{

	int buscar;
	int reemplazo;
	bool encontrado='f';
	printf("Ingrese el elemento que quiere cambiar \n");
	scanf("%d",&buscar);
	printf("Ingrese el nuevo elemento \n");
	scanf("%d",&reemplazo);
	
	for(int i=0;i<fila;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(*(*(pMatriz+i)+j)==buscar)
			{
				encontrado='v';
				*(*(pMatriz+i)+j)=reemplazo;
			}
			}
		if(encontrado=='f')
		{
		printf("el numerono no fue encontrado  /n");
		}
		}
	
	printf("Imprimiendo matriz con nuevo elemento \n");
	
	for(int i=0;i<fila;i++)
	{
		for(int j=0;j<col;j++)
		{
			
			
			printf("%d  ",*(*(pMatriz+i)+j));
		}
		printf("\n");
	}
}


