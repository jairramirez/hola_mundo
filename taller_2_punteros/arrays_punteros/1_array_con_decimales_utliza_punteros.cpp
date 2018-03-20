#include <stdio.h>
/*febrero 22 de 2018
Realizado por: Jair Ramírez Velásquez
Programa que utiliza un puntero, declara un array con numeros decimales y los muestra en pantallaint*/
int main() 
{
	int i;
	float numeros[]={32.583,11.239,45.781,22.237};
	float* direccion=numeros;
	for(i=0;i<4;i++)
	{
		printf("%.3f \n",*(direccion+i));
	}
	
	return 0;
}

