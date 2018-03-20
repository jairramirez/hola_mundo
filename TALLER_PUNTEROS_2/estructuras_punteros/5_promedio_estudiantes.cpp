#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*fecha:Marzo 18 DE 2018
realizado por: jair ramírez
programa que recibe los datos de un alumno y muestra su promedio*/
struct promedio{
	float nota1;
	float nota2;
	float nota3;
};
struct alumnos{
	char nombre[30];
	char sexo[10];
	int edad;
	float promedioAlumno;
	struct promedio prom;
}alumno[100], *palumno=alumno;

int tamanio=0;
float mayorPromedio=0;
float menorPromedio=999999;
int posicionMayor;
int posicionMenor;
void datos();
void mostrarDatos();

int main() 
{
	
	datos();
	mostrarDatos();
	return 0;
}
void datos()
{	
	int i;
	printf("Ingrese el numero de estudiantes \n");
	scanf("%d",&tamanio);
	for(i=0;i<tamanio;i++)
	{
		fflush(stdin);
		printf("ingrese nombre del alumno \n");
		fgets((palumno+i)->nombre,30,stdin);
		
		fflush(stdin);
		printf("ingrese el sexo del alumno \n");
		fgets((palumno+i)->sexo,10,stdin);
		
		printf("ingrese edad alumno \n");
		scanf("%d",&(palumno+i)->edad);
		
		printf("Ingrese notas del estudiante \n ");
		scanf("%f",&(palumno+i)->prom.nota1);
		scanf("%f",&(palumno+i)->prom.nota2);
		scanf("%f",&(palumno+i)->prom.nota3);
		printf("_______________________________________\n");
		(palumno+i)->promedioAlumno=((palumno+i)->prom.nota1+(palumno+i)->prom.nota2+(palumno+i)->prom.nota3)/3;
		
		
		if((palumno+i)->promedioAlumno>mayorPromedio)
		{
			mayorPromedio=(palumno+i)->promedioAlumno;
			posicionMayor=i;
		}
		if((palumno+i)->promedioAlumno<menorPromedio)
		{
			menorPromedio=(palumno+i)->promedioAlumno;
			posicionMenor=i;
		}
		
	}
	
}

void mostrarDatos()
{
	system("cls");
	printf("IMPRIMIENDO DATOS DEL ALUMNO MAYOR PROMEDIO \n");
	
		printf("nombre:%s \n",(palumno+posicionMayor)->nombre);
		printf("sexo:  %s \n",(palumno+posicionMayor)->sexo);
		printf("edad:  %d \n",(palumno+posicionMayor)->edad);
		printf("\npromedio %.2f\n",(palumno+posicionMayor)->promedioAlumno);
		printf("_______________________________________\n");
		
		printf("IMPRIMIENDO DATOS DEL ALUMNO MENOR PROMEDIO \n");	
		printf("nombre:%s \n",(palumno+posicionMenor)->nombre);
		printf("sexo:  %s \n",(palumno+posicionMenor)->sexo);
		printf("edad:  %d \n",(palumno+posicionMenor)->edad);
		printf("\npromedio %.2f\n",(palumno+posicionMenor)->promedioAlumno);
		printf("_______________________________________\n");
	
}
