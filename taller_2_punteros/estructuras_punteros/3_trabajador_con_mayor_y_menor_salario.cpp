#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Fecha: marzo 18 de 2018
Realizado por: Jair Ramírez
Programa que pide los datos de n trabajadores  y muestra los trabajadores con mayor y menor salario*/
struct trabajadores{
	char nombre[30];
	char cargo[30];
	int salario;
	
}trabajador[100], *ptrabajador=trabajador;
int tamanio=0;
int mayor=1;
int menor=999999999;
int posMayor;
int posMenor;
void datosTrabajador();
void mostrarTrabajador();

int main() 
{
	 datosTrabajador();
	 mostrarTrabajador();
	return 0;
}
void datosTrabajador()
{
	int i;
	
	printf("Ingrese cantidad de trabajadores \n");
	scanf("%d",&tamanio);
	for(i=0;i<tamanio;i++)
	{
		fflush(stdin);
		printf("Ingrese nombre del trabajador \n");
		fgets((ptrabajador+i)->nombre,30,stdin);
		
		fflush(stdin);
		printf("Ingrese el cargo del trabajador \n");
		fgets((ptrabajador+i)->cargo,30,stdin);
		
		printf("Ingrese salario del trabajador \n");
		scanf("%d",&(ptrabajador+i)->salario);
		
		printf("______________________________________________\n");
		
		if((ptrabajador+i)->salario>mayor)
		{
			mayor=(ptrabajador+i)->salario;
			posMayor=i;
		}
		if((ptrabajador+i)->salario<menor)
		{
			menor=(ptrabajador+i)->salario;
			posMenor=i;
		}
	
}
}
void mostrarTrabajador()
{
	system("cls");

	printf("TRABAJADOR CON MAYOR SALARIO\n");

		printf("Nombre: %s \n",(ptrabajador+posMayor)->nombre);
		
		printf("Cargo del trabajador: %s \n",(ptrabajador+posMayor)->cargo);
		
		printf("\nSalario del trabajador: %d \n",(ptrabajador+posMayor)->salario);
		
		printf("______________________________________________\n");
		
		printf("TRABAJADOR CON MENOR SALARIO \n");
		printf("Nombre: %s \n",(ptrabajador+posMenor)->nombre);
		
		printf("Cargo del trabajador: %s \n",(ptrabajador+posMenor)->cargo);
		
		printf("\nSalario del trabajador: %d \n",(ptrabajador+posMenor)->salario);
		
		printf("______________________________________________\n");
		
	
}

