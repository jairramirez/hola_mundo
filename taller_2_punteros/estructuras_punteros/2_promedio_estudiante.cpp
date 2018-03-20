#include <stdio.h>
#include <string.h>
/*fecha:marzo 17de 2018
programa que recibe los datos de 3 alumnos y muestra el alumno con mejor promedio
realizado por: jair ramírez*/
struct alumnos{
	char nombre[30];
	int edad;
	char grado[20];
	float promedio;
}alumno[3],*palumno=alumno;
void datos();

int main() 
{
	datos();
	return 0;
}
void datos()
{
	float mayorPromedio=0;
	int posicionMayor;
	
	for(int i=0;i<3;i++)
	{
		fflush(stdin);
		printf("ingrese nombre del alumno \n");
		fgets((palumno+i)->nombre,30,stdin);
		
		fflush(stdin);
		printf("ingrese grado del alumno \n");
		fgets((palumno+i)->grado,20,stdin);
		
		printf("ingrese edad alumno \n");
		scanf("%d",&(palumno+i)->edad);
		
		printf("Ingrese el promedio del estudiante \n ");
		scanf("%f",&(palumno+i)->promedio);
		
		
		if((palumno+i)->promedio>mayorPromedio)
		{
			mayorPromedio=(palumno+i)->promedio;
			posicionMayor=i;
		}
		
	}
	printf("El alumno con mayor promedio es: \n");
	printf("nombre:%s \n",(palumno+posicionMayor)->nombre);
	printf("edad:  %d \n",(palumno+posicionMayor)->edad);
	printf("nombre:%s \n",(palumno+posicionMayor)->grado);
	printf("promedio %0.2f\n",mayorPromedio);
	
	
}





