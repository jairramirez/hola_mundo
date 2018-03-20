#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Fecha: marzo 18 de 2018
Realizado por: Jair Ramírez
Programa que pide los datos de un competidor y  le asigna una categoria segun su edad e imprime sus dastos*/
struct competidores{
	char nombre[30];
	int edad;
	char sexo[10],club[30],categoria[10];
	
}competidor[100], *pcompetidor=competidor;
int tamanio=0;
void categoriasCompetidor();
void mostrarCompetidores();

int main() 
{
	categoriasCompetidor();
	 mostrarCompetidores();
	return 0;
}
void categoriasCompetidor()
{
	int i;

	printf("Ingrese cantidad de competidores \n");
	scanf("%d",&tamanio);
	for(i=0;i<tamanio;i++)
	{
		fflush(stdin);
		printf("Ingrese nombre del competidor \n");
		fgets((pcompetidor+i)->nombre,30,stdin);
		
		printf("Ingrese edad del competidor \n");
		scanf("%d",&(pcompetidor+i)->edad);
		
		fflush(stdin);
		printf("Ingrese sexo del competidor \n");
		fgets((pcompetidor+i)->sexo,10,stdin);
		
		fflush(stdin);
		printf("Ingrese nombre del club del competidor \n");
		fgets((pcompetidor+i)->club,30,stdin);
		printf("______________________________________________\n");
		if((pcompetidor+i)->edad<=15)
		{
			strcpy((pcompetidor+i)->categoria,"infantil");
		}
		if((pcompetidor+i)->edad>15 && (pcompetidor+i)->edad<=30)
		{
			strcpy((pcompetidor+i)->categoria,"joven");
		}
		else{
			if((pcompetidor+i)->edad>30)
			{
				strcpy((pcompetidor+i)->categoria,"mayor");
			}
		}
	}
}
void mostrarCompetidores()
{
	system("cls");
	printf("LISTADO DE COMPETIDORES \n");
	for(int i=0;i<tamanio;i++)
	{
	printf("Nombre: %s \n",(pcompetidor+i)->nombre);
	
	printf("Edad del competidor: %d \n",(pcompetidor+i)->edad);
	
	printf("\nSexo del competidor: %s \n",(pcompetidor+i)->sexo);
	
	printf("Club: %s \n",(pcompetidor+i)->club);
	
	printf("Categoria: %s \n",(pcompetidor+i)->categoria);
	
	printf("______________________________________________\n");
	}
}
