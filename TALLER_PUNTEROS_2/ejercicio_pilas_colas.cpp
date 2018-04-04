#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
/*Marzo 25 de 2018
Realizado por: Jair Ramírez
Programa  pila y cola que inserta,muestra, borra elementos uno a uno, borra toda la pila o cola */

struct Nodo{
	int dato_pila;
	Nodo *siguiente;
};
struct Nodo_cola{
	int dato;
	Nodo_cola *siguiente;
};


Nodo *pila = NULL;
Nodo_cola *frente = NULL;
Nodo_cola *fin = NULL;
void insertar_pila(Nodo*&pila, int dato);
void borrar_pila(Nodo *&pila);
void borrarpila(Nodo *&);
void mostrar_datos_pila(Nodo *&pila);
void menuPila(Nodo *&pila);

void pushcola(Nodo_cola *&,Nodo_cola *&,int);
void popcola(Nodo_cola *&,Nodo_cola *&,int &);
void borrar_cola(Nodo_cola *&,Nodo_cola*&,int &);
void mostrar_cola(Nodo_cola *&,Nodo_cola *&,int );
bool colaVacia(Nodo_cola *);
void menu_cola(Nodo_cola *&,Nodo_cola *&);
void menu_principal();

int main() {
	
	menu_principal();
	
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
	system("cls");
	int opc;
	int dato;
	
	while(opc != 5){
		printf("\n============|MENU PILA|============\n");
		
		printf("\n1. Insertar datos");
		printf("\n2. Eliminar datos");
		printf("\n3. Ver los datos");
		printf("\n4. Borrar pila completa");
		printf("\n5. Salir\n");
		printf("_________________________________\n");
		printf("\nIngrese una opcion \n");
		scanf("%d",&opc);
		
		switch(opc){
		case 1: system("cls");
			    printf("\nIngrese un numero\n");
			    scanf("%d",&dato);
			    insertar_pila(pila,dato);
			     printf("\n");
		break;
		case 2: system("cls");
			    printf("\n\t\tEliminando datos de la pila\n\n");
			    borrar_pila(pila);
		break;
		case 3: system("cls");
			    printf("\nMostrar los datos de la pila \n");
		        mostrar_datos_pila(pila);
		break;	
		case 4: system("cls");	
				borrarpila(pila);
		break;
		case 5: system("cls");
		break;
		default: printf("\n\t\tHa introducido un dato invalido\n");
		break;
		}		
	}
}

void pushcola(Nodo_cola *&frente,Nodo_cola *&fin,int dato){
	Nodo_cola *nuevo_nodo = new Nodo_cola();
	nuevo_nodo ->dato = dato;
	nuevo_nodo -> siguiente=NULL;
	if(colaVacia(frente)){
		frente=nuevo_nodo;
	}else{
		fin -> siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
	printf("El dato %d se agrego correctamente a la Cola\n",dato );
}

bool colaVacia(Nodo_cola *frente){
	return (frente==NULL)?true : false;
}
//funcion eliminar elementos de la cola
void borrar_cola(Nodo_cola *&frente,Nodo_cola *&fin,int &dato){
	
	if(frente == NULL){
		printf("\n\t\tCola vacia\n");
		
	}
	while(frente!= NULL){
		
		Nodo_cola *aux = frente;
		dato=frente->dato;
		frente= frente->siguiente;
		printf("\n\t\tSe ha borrado el dato [%d]\n",aux->dato);
		delete aux;
		fin=NULL;
	}
}
void popcola(Nodo_cola *&frente,Nodo_cola *&fin,int &dato){
	dato=frente->dato;
	Nodo_cola *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}else{
		frente = frente -> siguiente;
	}
	printf("Borrando el dato [%d] \n",aux->dato);
	delete aux;
}
void mostrar_datos_cola(Nodo_cola *&frente,Nodo_cola *&fin,int dato){
	Nodo_cola *aux = fin;
	if(fin == NULL){
		printf("\n\t\tLa cola esta vacia\n");
	}
	aux=frente;
	while(aux!= NULL){
		
		printf("\n\t\t[%d]",aux->dato);
		aux= aux->siguiente;
	}
	printf("\n");
	
}
void menu_cola(Nodo_cola *&frente,Nodo_cola *&fin)
{
	system("cls");
	int opc;
	int dato;
	
	while(opc != 5){
		printf("\n============|MENU COLA|============\n");
		
		printf("\n1. Insertar datos");
		printf("\n2. Borrar dato");
		printf("\n3. Ver los datos");
		printf("\n4. Borrar cola completa");
		printf("\n5. Salir\n");
		printf("\n______________________________________\n");
		printf("\nIngrese una opcion \n");
		scanf("%d",&opc);
		
		switch(opc){
		case 1: system("cls");
			    printf("\nIngrese un numero\n");
			    scanf("%d",&dato);
			    pushcola(frente,fin,dato);
			    printf("\n");
		break;
		case 2: system("cls");
			    printf("\n\t\tEliminando dato de la cola\n\n");
		        popcola(frente,fin,dato);
		break;
		case 3: system("cls");
			    printf("\nMostrando los datos de la cola \n");
		        mostrar_datos_cola(frente,fin,dato);
		break;	
		case 4: system("cls");
			    printf("\n\t\tEliminando cola completa\n\n");
			    borrar_cola(frente,fin,dato);
		break;
		case 5: system("cls");
		break;
		default: printf("\n\t\tHa introducido un dato invalido\n");
		break;
		}		
	}
}

void menu_principal()
{
	int opc;
	while(opc!=3)
	{
		printf("\n============|MENU PRINCIPAL|============\n");
		
		printf("\n1.Menu pila ");
		printf("\n2.Menu colas ");
		printf("\n3.salir\n");
		printf("\n=========================================\n");
		printf("Ingrese una opcion \n");
		scanf("%d",&opc);
		
		switch(opc)
		{
		case 1: menuPila(pila);
		break;
		case 2: menu_cola(frente,fin);
		break;
		case 3: exit(3);
		
		default: printf("La opcion es incorrecta \n");
		}
	}
}







