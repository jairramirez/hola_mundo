#include <stdio.h>
/*Febrero 25 de 2018
Realizado por: Jair Ramírez Velásquez
Programa que utiliza punteros, comprueba si un numero es par o impar y señala su posición*/
 

int main()
{
	int numeros[100];
	int i,tamanio,num;
	int* pNumeros=numeros;
	printf("Ingrese tamanio vector \n");
	scanf("%d",&tamanio);
	printf("Ingrese numeros \n");
	for(i=0;i<tamanio;i++)
	{
	scanf("%d",&num);	
	
	*(pNumeros+i)=num;
	}
	
	printf("Mostrando numeros vector \n");
	for(i=0;i<tamanio;i++)
	{
		if(*(pNumeros+i)%2==0)
	{
			printf("el numero %d es par su posicion es    %d \n",*(pNumeros+i),i);	
		
	}
		
		else printf("el numero %d es impar  su posicion es %d \n",*(pNumeros+i),i);
		
		   
	}
	

	
	
	return 0;
}

