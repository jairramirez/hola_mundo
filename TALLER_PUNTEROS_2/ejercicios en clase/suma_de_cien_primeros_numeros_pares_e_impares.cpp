#include <stdio.h>
#include <stdlib.h>
/*Fecha: Marzo 19 de 2018
Realizado por: Jair Ramírez
Programa que muestra la suma de los pirmeros 100 numeros pares e impares*/
int main()
{
	int i,suma=0;
	int numeros;
	int *pnumeros;
	int sumaImpares=0;
	printf("ingrese tamanio del vector \n");
	scanf("%d",&numeros);
	pnumeros=new int [numeros];
	for(i=0;i<numeros;i++)
	{  
		pnumeros[i]=i;
		if(pnumeros[i]%2==0)
		{
			suma=suma + pnumeros[i];
		
		}
		else if(pnumeros[i]%2!=0)
		{
			sumaImpares=sumaImpares + pnumeros[i];
		}
		   
	}
	printf("la suma de los numeros pares de 1 al 100 es %d \n",suma);
	printf("la suma de los numeros impares de 1 al 100 es %d \n",sumaImpares);
	
	
	delete[]pnumeros;
	return 0;
}



