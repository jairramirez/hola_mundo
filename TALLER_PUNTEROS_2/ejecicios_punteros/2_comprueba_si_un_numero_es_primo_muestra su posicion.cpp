#include <stdio.h>
/*Febrero 25 de 2018
Realizado por: Jair Ramírez Velásquez
Programa que utiliza punteros, comprueba si un numero es primo o no y señala su posición*/
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
	
	for (int i=0;i<tamanio;i++){
		int cont=0;
		for(int j=1;j<=tamanio;j++){
			if(	*(pNumeros+i)%j==0){
				cont++;
			} 
		}
		if (cont==2){
			printf("el numero %d es primo su posicion es    %d \n",*(pNumeros+i),i);
			
		} else printf("el numero %d no es primo su posicion es %d \n",*(pNumeros+i),i);
	}
	
	
	return 0;
}

