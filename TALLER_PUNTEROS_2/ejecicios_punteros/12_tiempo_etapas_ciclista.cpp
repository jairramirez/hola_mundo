#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tiempo{
	int horas;
	int minutos;
	int segundos;
	int tiempoEnSegundos;
}ciclista,*pciclista=&ciclista;

void datosTiempo();
void contarTiempo();
int main() {
	datosTiempo();
	contarTiempo();
	return 0;
}
void datosTiempo()
{
	int horaEnSegundos,minutosEnSegundos,tiempoEnSegundos,horas,minutos,segundos;
	int suma=0;
	printf("Ingrese el tiempo de las etapas \n");
	
	for(int i=1;i<=3;i++)
	{
	printf("Ingrese horas de la etapa %d \n",i);
	scanf("%d",&(pciclista+i)->horas);
	horaEnSegundos=(pciclista+i)->horas*3600;
	
	printf("Ingrese minutos de la etapa %d \n",i);
	scanf("%d",&(pciclista+i)->minutos);
	minutosEnSegundos=(pciclista+i)->minutos*60;
	
	printf("Ingrese segundos de la etapa %d \n",i);
	scanf("%d",&(pciclista+i)->segundos);
	
	(pciclista+i)->tiempoEnSegundos=horaEnSegundos+minutosEnSegundos+(pciclista+i)->segundos;
	suma+=(pciclista+i)->tiempoEnSegundos;
	printf("El tiempo total en segundos es %d  \n",suma);
	}
}
void contarTiempo()
{   
	int horas,minutos,segundos,suma;
	horas=suma/3600;
	suma%=3600;
	minutos=suma/60;
	suma%=60;
	segundos=suma/1;
	printf("El tiempo total  reccorrido por el ciclista en las tres etapas es:%d horas,  %d minutos, %d segundos \n",horas,minutos,segundos);
}
