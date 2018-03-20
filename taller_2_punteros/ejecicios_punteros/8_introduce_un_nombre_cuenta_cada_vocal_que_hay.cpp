#include <stdio.h>
#include <string.h>
/*Febrero 25 de 2018
Realizado por: Jair Ramírez Velásquez
Programa que pide el nombre a un usuario y devuelve el numero de cada  vocal que hay*/

int main()
{
	char nombre[30];
	char* pnombre=nombre;
	int i;
	int contador_a=0,contador_e=0,contador_i=0,contador_o=0,contador_u=0;
	fflush(stdin);
	printf("Digite su nombre \n");
	fgets(pnombre,30,stdin);
	
	for(i=0;i<30;i++)
	{
		if(*(pnombre)!='\n')
		{		
		switch(*(pnombre))
		{
		case 'a':  contador_a++;
		break;
		case 'e':  contador_e++;
		break;
		case 'i':  contador_i++;
		break;
		case 'o':  contador_o++;
		break;
		case 'u':  contador_u++;
		break;
		}
		pnombre++;
    	}
	}
	printf("La cantidad de la vocal a es: %i \n",contador_a);
	printf("La cantidad de la vocal e es: %i \n",contador_e);
	printf("La cantidad de la vocal i es: %i \n",contador_i);
	printf("La cantidad de la vocal o es: %i \n",contador_o);
	printf("La cantidad de la vocal u es: %i \n",contador_u);
	
	return 0;
}
