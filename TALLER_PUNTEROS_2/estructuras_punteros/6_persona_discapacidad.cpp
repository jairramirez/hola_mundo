#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*fecha: Marzo 19 de 2018
Realizado por:Jair Ramírez
programa que llena una estructura con los datos de una persona y pregunta si tiene algun tipo de discapacidad y llena otros dos vectores
con los que presentan discapacidad y con los que no tienen discapacidad*/
struct personas{
	char nombre[30];
	bool discapacidad;
}personitas[100], *ppersonitas=personitas;
struct conDiscapacidad{
	char nombre[30];
}discapa[100], *pdiscapa=discapa;

struct sinDiscapacidad{
	char nombre[30];
}sindisca[100], *psindisca=sindisca;

int tam=0;
int disc = 0, sinDisc = 0;
void datosPersonas();
void clasificarPersonas();
void mostrarPersonas();
int main()
{
	
	datosPersonas();
	clasificarPersonas();
	mostrarPersonas();
	return 0;
}

void datosPersonas()
{
	int i,opcion;
	printf("Ingrese Cantidad de personas:\n");
	scanf("%d",&tam);
	for (i=0;i<tam;i++){
		printf("%i.Nombre:\n",i+1);
		fflush(stdin);
		fgets((ppersonitas+i)->nombre,30,stdin);
		printf("Tiene alguna discapacidad:\n");
		printf("Ingrese el numero 1.Si ó 2.No\n");
		scanf("%d",&opcion);
		switch(opcion){
		case 1:
			(ppersonitas+i)->discapacidad=true;
			break;
		case 2:
			(ppersonitas+i)->discapacidad=false;
			break;
		}
	}
	

}

void clasificarPersonas(){
	
	int i;
	int posicion=0;
	int pos=0;
	for(i = 0; i < tam; i++){
	if((ppersonitas+i)->discapacidad == true){
	posicion=i;
	strcpy((pdiscapa+disc)->nombre,(ppersonitas+posicion)->nombre);
	disc ++;
		}
	
	else	{
	pos=i;
			strcpy((psindisca+sinDisc)->nombre,(ppersonitas+pos)->nombre);	
			sinDisc ++;
		}
		
	}
	
}
void mostrarPersonas()
{
	system("cls");
	printf("listado de personas con discapacidad \n");
	for(int i=0;i<disc;i++){
		printf("Nombre: %s \n",(pdiscapa+i)->nombre);
	
	}
	printf("listado de personas sin discapacidad \n");
	for(int i=0;i<sinDisc;i++){
		printf("Nombre: %s \n",(psindisca+i)->nombre);
}
}
