#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
/*Marzo 25 de 2018
Realizado por: Jair Ramírez
Programa que inserta,muestra, borra elementos uno a uno, borra toda la pila */

struct Nodo{
	int dato_pila;
	Nodo *siguiente;
};



Nodo *pila = NULL;
void insertar_pila(Nodo*&pila, int dato);
void borrar_pila(Nodo *&pila);
void borrarpila(Nodo *&);
void mostrar_datos_pila(Nodo *&pila);
void menuPila(Nodo *&pila);

int main() {

	
	menuPila(pila);
	return 0;
}

void insertar_pila(	Nodo *&pila, int dato){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato_pila = dato;
	nuevo_nodo->siguiente = pila;
	pila=nuevo_nodo;
	printf("\n\t\tEL dato [%d] se agrego correctamente a la pila\n",dato);
}

void borrar_pila(Nodo *&pila){
	if(pila != NULL){
		Nodo *aux = pila;
		pila=aux->siguiente;
		printf("\n\t\tSe ha borrado el dato [%d]\n",aux->dato_pila);
		delete aux;
	}
}
void borrarpila(Nodo *&pila){
	while(pila!=NULL){
		Nodo *aux=pila;
		// n=aux->dato;
		pila=aux->siguiente;
		printf("Borrando el dato [%d] \n",aux->dato_pila);
		delete aux; 
	}
	
}

void mostrar_datos_pila(Nodo *&pila){
	Nodo *nuevo_nodo = pila;
	if(pila == NULL){
		printf("\n\t\tLa pila esta vacia\n");
	}else{
		if(nuevo_nodo!= NULL){
			while(nuevo_nodo != NULL){
				printf("\n\t\t[%d]",nuevo_nodo->dato_pila);
				nuevo_nodo= nuevo_nodo->siguiente;
			}
		}else{
			printf("\n\t\t[%d]",nuevo_nodo->dato_pila);
		}
		printf("\n");
	}
}

void menuPila(Nodo *&pila){
	int opc=0;
	int dato=0;

	while(opc != 5){
		
		printf("\nIngrese una opcion \n");
		printf("\n1. Insertar datos");
		printf("\n2. Eliminar datos");
		printf("\n3. Ver los datos");
		printf("\n4. Borrar pila completa");
		printf("\n5. Salir\n");
		scanf("%d",&opc);
		
		switch(opc){
		case 1:
			system("cls");
		printf("\nIngrese un numero\n");
		scanf("%d",&dato);
		insertar_pila(pila,dato);
		printf("\n");
		
		
		break;
		case 2: printf("\n\t\tEliminando datos de la pila\n\n");
		borrar_pila(pila);
	    //system("pause");
	
		break;
		case 3:	printf("\nMostrar los datos\n");
		mostrar_datos_pila(pila);
		break;	
		case 4:	borrarpila(pila);
		break;
		case 5: exit(5);
		default: printf("\n\t\tHa introducido un dato invalido\n");
		break;
		}		
	}
}



