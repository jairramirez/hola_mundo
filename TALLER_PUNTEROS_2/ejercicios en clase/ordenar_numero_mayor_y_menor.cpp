#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	int i,j,mayor,menor;
	int numeros;
	int *pnumeros;
	int aux;
		printf("Ingrese tamanio  del vector \n");
	scanf("%d",&numeros);
		pnumeros=new int [numeros];
	for(i=0;i<numeros;i++)
	{
		printf("Ingrese elementos del vector  \n");
		scanf("%d",&pnumeros[i]);
	}
	
	for(i=0;i<numeros;i++)
	{
		for(j=0;j<numeros;j++)
		{
			if(pnumeros[j]>pnumeros[j+1])
			{
				aux=pnumeros[j];
				pnumeros[j]=pnumeros[j+1];
				pnumeros[j+1]=aux;
			}
		}
	}
	printf("Imprimiendo los elementos del vector ordenados \n");
	for(i=0;i<numeros;i++)
	{
		printf("%d \n",pnumeros[i]);
	}
	
	for(i=0;i<numeros;i++)
	{
		if(pnumeros[i]>mayor)
		{
			mayor=pnumeros[i];
		}
	}
	for(i=0;i<numeros;i++)
	{
		if(pnumeros[i]<menor)
		{
			menor=pnumeros[i];
		}
	}
	printf("El numero mayor es: %d \n",mayor);
	printf("El numero mayor es: %d \n",menor);
	delete[]pnumeros;
	return 0;
}

