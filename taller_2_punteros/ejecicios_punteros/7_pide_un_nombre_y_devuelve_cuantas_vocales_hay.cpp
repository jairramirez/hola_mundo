#include <stdio.h>
/*Febrero 25 de 2018
Realizado por: Jair Ramírez Velásquez
Programa que pide el nombre a un usuario y devuelve el numero de vocales que hay*/
int contadorVocales(char *);
int main()
{
	char nombre[30];
	char* pnombre=nombre;
	
	
	
	fflush(stdin);
	printf("Digite su nombre \n");
    fgets(pnombre,30,stdin);
	printf("El numero de vocales es: %i",contadorVocales(nombre));
	
	
	return 0;
}
int contadorVocales(char *s)
{
	int contador=0;
	while(*s)
	{
		switch(*s)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': contador++;
		}
		s++;
	}
	return contador;
	
}

