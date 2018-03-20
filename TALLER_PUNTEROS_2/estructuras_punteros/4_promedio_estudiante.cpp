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
}alumno, *palumno=&alumno;
void datos();


int main() 
{
	
	datos();

	return 0;
}
void datos()
{	

	fflush(stdin);
	printf("ingrese nombre del alumno \n");
	fgets((palumno)->nombre,30,stdin);
	
	fflush(stdin);
	printf("ingrese el sexo del alumno \n");
	fgets((palumno)->sexo,10,stdin);
	
	printf("ingrese edad alumno \n");
	scanf("%d",&(palumno)->edad);
	
	printf("Ingrese notas del estudiante \n ");
	scanf("%f",&(palumno)->prom.nota1);
	scanf("%f",&(palumno)->prom.nota2);
	scanf("%f",&(palumno)->prom.nota3);
	printf("_______________________________________\n");
	(palumno)->promedioAlumno=((palumno)->prom.nota1+(palumno)->prom.nota2+(palumno)->prom.nota3)/3;
	

	printf("IMPRIMIENDO DATOS DEL ALUMNO \n");

	
	printf("nombre:%s \n",(palumno)->nombre);
	printf("sexo:  %s \n",(palumno)->sexo);
	printf("edad:  %d \n",(palumno)->edad);
	printf("\npromedio %.2f\n",(palumno)->promedioAlumno);
	printf("_______________________________________\n");

}


