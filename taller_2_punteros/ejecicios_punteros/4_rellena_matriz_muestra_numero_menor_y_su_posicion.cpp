#include <stdio.h>
/*Febrero 25 de 2018
Realizado por: Jair Ramírez Velásquez
Programa que utiliza punteros, rellena vector con n numeros mustra cual es el menor y señala su posición*/
int main()
{
	int numeros[100];
	int i,num,posicion,tamanio,menor=9999;
	int* pNumeros=numeros;
	int pNum=num;
	printf("Ingrese tamanio del vector \n");
	scanf("%d",&tamanio);
	printf("Ingrese numeros \n");
	for(i=0;i<tamanio;i++)
	{
		scanf("%d",&pNum);
		*(pNumeros+i)=pNum;
		
		if(*(pNumeros+i)<menor)
		{
			menor=*(pNumeros+i);
			posicion=i;
		}
		
	}
	printf("El numero menor es: %d y su posicion es: %d",menor,posicion);
	
	
	return 0;
}

