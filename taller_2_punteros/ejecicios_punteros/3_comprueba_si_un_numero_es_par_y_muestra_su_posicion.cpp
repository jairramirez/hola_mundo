#include <stdio.h>
/*Febrero 25 de 2018
Realizado por: Jair Ramírez Velásquez
Programa que utiliza punteros, crea un arreglo de 10 posiciones comprueba si un numero
 es par o impar y señala su posición*/


int main()
{
	int numeros[10];
	int i,num;
	int* pNumeros=numeros;
	printf("Ingrese numeros \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num);	
		
		*(pNumeros+i)=num;
	}
	
	printf("Mostrando numeros vector \n");
	for(i=0;i<10;i++)
	{
		if(*(pNumeros+i)%2==0)
		{
			printf("el numero %d es par su posicion es    %d \n",*(pNumeros+i),i);	
			
		}
	}
	return 0;
}



