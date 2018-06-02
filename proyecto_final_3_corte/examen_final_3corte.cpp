#include <stdio.h>
#include <stdlib.h>
//Proyecto final: Arboles, colas y archivos
//Presentado por: Jair Ramírez y Jorge Parra
//==============================================================================

struct nodo{
	int Dato;
	nodo *Siguiente;
};
//==============================================================================
struct Nodo{
	int dato;
	Nodo *derech;
	Nodo *izquier;
	Nodo *padre;
};

//==============================================================================
//declaracion global de variables
FILE *archivo;
int n=0;
int p=0;
nodo *cola=NULL;
nodo *frente = NULL;
nodo *fin = NULL;
nodo *nuevo_nodo=NULL;
nodo *Siguiente=NULL;
Nodo *arbol = NULL;
Nodo *padre = NULL;
//==============================================================================
//prototipos de colas:
void pushcola(nodo *&,nodo *&,int);
void popcola(nodo *&,nodo *&,int );
bool colaVacia(nodo *);
void borrarCola(nodo *&frente, nodo *&fin, int p);
void mostrarCola(nodo *&,nodo *&, nodo *&);
void menuColas();
void archivarElementos(nodo *&);

void menuArbol();
Nodo *crearNodo(int, Nodo *);
void insertar(Nodo *&,int, Nodo *);
void mostrarArbol(Nodo *, int);
bool buscarNodo(Nodo *, int);
void inOrder(Nodo *);
void posOrder(Nodo *);
void preOrder(Nodo *);
void eliminar(Nodo *, int);
Nodo *minimo(Nodo *);
void eliminarNodo(Nodo *);
void eliminarArbol(Nodo *);
void reemplazar(Nodo *, Nodo *);
void destruirNodo(Nodo *);
void Cargar(Nodo *&);

void menuPrincipal();
//==============================================================================

int main() {
	
	menuPrincipal();
	
	return 0;
}

//==============================================================================

void menuPrincipal(){
	
	system("cls");
	
	int opcion;
	
	printf("\n********* MENU PRINCIPAL *********\n\n");
	printf("1. COLAS. \n");
	printf("2. ARBOL. \n");
	printf("0. SALIR. \n");
	printf("\nIngrese numero segun su eleccion: ");
	scanf("%d", &opcion);
	
	do{
		
		switch(opcion){
			
		case 1: menuColas(); 
		break;
		case 2: menuArbol();
		break;
		case 0: exit(0);
		default: printf ("Opcion no valida.");
		break;
		}
	}while (opcion!=3);
}

//==============================================================================

void menuColas(){
	
	system("cls");
	
	int opcion;
	
	do{
		
		printf("\n************* COLAS ***************\n");
		
		printf("\n1. Agregar dato a la cola. \n");
		printf("2. Eliminar todos los datos la cola. \n");
		printf("3. Eliminar un dato de la cola. \n");
		printf("4. Mostrar los datos de la cola. \n");
		printf("5. guardar en archivo. \n");
		printf("6. Regresar al menu principal. \n");
		printf("0. Salir. \n");
		printf("\nIngrese numero segun operacion a realizar: ");
		scanf("%d", &opcion);
		
		switch(opcion){
			
		case 1: pushcola(*&frente, *&fin, p);
		break;
		case 2: borrarCola(*&frente, *&fin, p);
		printf("\nCola eliminada con exito!\n\n");
		break;
		case 3: popcola(*&frente, *&fin, p);
		printf("\nDato eliminado con exito!\n\n");
		break;
		case 4: mostrarCola(*&frente, *&fin, *&Siguiente);
		break;
		case 5: archivarElementos(*&frente);
		break;
		case 6: menuPrincipal();
		break;
		case 0: exit (0);
		break;
		default: printf ("\nOpcion no valida.\n");
		}
	}while (opcion!=0);
}

//==============================================================================

void pushcola(nodo *&frente,nodo *&fin, int p){
	
	system("cls");
	
	printf("\ningrese el dato: ");
	scanf("%d", &p);
	
	nodo *nuevo_nodo = new nodo();
	
	nuevo_nodo ->Dato = p;
	nuevo_nodo -> Siguiente=NULL;
	
	if(colaVacia(frente)){
		frente=nuevo_nodo;
	}else{
		fin -> Siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
	printf("\nEl dato %d se agrego correctamente a la Cola\n",p );
}

//==============================================================================

void borrarCola(nodo *&frente, nodo *&fin, int p){
	
	system("cls");
	
	p=frente->Dato;
	
	nodo *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}else{
		
		while(frente!=NULL){
			
			frente = frente -> Siguiente;	
			
		}
	}
	delete aux;
}

//==============================================================================

bool colaVacia(nodo *frente){
	return (frente==NULL)?true : false;
}

//==============================================================================

void popcola(nodo *&frente,nodo *&fin,int p){
	
	system("cls");
	
	p=frente->Dato;
	
	nodo *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}else{
		frente = frente -> Siguiente;
	}
	delete aux;
}

//==============================================================================

void mostrarCola(nodo *&frente, nodo *&fin, nodo *&Siguiente){
	
	system("cls");
	
	nodo *cola;
	
	if(frente==NULL){
		printf("\nLa cola esta vacia!\n");
	}else{
		
		cola=frente;
		
		printf("\n");
		printf("\nlos elementos de la cola son: ");
		
		while(cola!=NULL){
			
			printf("%d,", cola->Dato);
			
			cola=cola->Siguiente;
		}	
	}
	
	printf("\n");
}
//==============================================================================
void archivarElementos(nodo *&frente){
	nodo *copiaCola = frente;
	int dat;
	archivo = fopen("archivo_cola.txt", "w");
	while( copiaCola!= NULL){
		dat = copiaCola->Dato;
		fprintf(archivo, "%d\n", dat);
		copiaCola = copiaCola->Siguiente;
		
	}
	fclose(archivo);
}

//==============================================================================

void menuArbol(){
	
	int opcion;
	int p, d, dat;
	int contador=0;
	do{
		
		printf("\n\n***********************************\n");
		printf("***************      **************\n");
		printf("**************  MENU  *************\n");
		printf("*************   ARBOL  ************\n");
		printf("************   LETRAS   ***********\n");
		printf("*************          ************\n");
		printf("*****************   ***************\n");
		printf("*****************   ***************\n");
		printf("*****************   ***************\n");
		printf("* 1. Ingresar dato.               *\n");
		printf("* 2. Mostrar arbol completo.      *\n");
		printf("* 3. buscar nodo en el arbol.     *\n");
		printf("* 4. recorrer arbol en orden.     *\n");
		printf("* 5. recorrer arbol en pos orden. *\n");
		printf("* 6. recorrer arbol en pre orden. *\n");
		printf("* 7. eliminar un nodo.            *\n");
		printf("* 8. eliminar arbol.              *\n");
		printf("* 9. cargar archivo.              *\n");
		printf("* 10. regresar al menu principal   *\n");
		printf("* 0. SALIR                        *\n");
		printf("***********************************\n\n");
		printf("Ingrese numero segun su eleccion: ");
		scanf("%d", &opcion);
		
		switch(opcion){
			
		case 1:  
			
			system("cls");
			printf("Ingrese dato: ");
			scanf("%d", &p);
			insertar(arbol, p, NULL);
			break;
			
		case 2:
			system("cls");
			if(arbol==NULL){
				printf("El arbol esta vacio \n");
			}else{
				printf("\nArbol completo:\n\n");
				mostrarArbol(arbol, contador);
			}
			break;
		case 3: 
			system("cls");
			printf("\nIngrese dato a bucar: ");
			scanf("%d", &d);
			if (buscarNodo(arbol, d)==true){
				
				printf("\nEl dato SI existe en el arbol");
			}else{
				
				printf("\nEl dato NO existe en el arbol");
			}
			break;
		case 4: 
			system("cls");
			printf("\nMostrando datos del arbol en orden:\n\n");
			inOrder(arbol);
			break;
		case 5: 
			system("cls");
			printf("\nMostrando datos del arbol en pos orden:\n\n");
			posOrder(arbol);
			break;
		case 6:
			system("cls");
			printf("\nMostrando datos del arbol en pre orden:\n\n");
			preOrder(arbol);
			break;
		case 7: 
			system("cls");
			printf("\ningrese nodo a eliminar: ");
			scanf("%d",&dat);
			eliminar(arbol,dat);
			printf("\nnodo eliminado con exito!\n\n");
			break;
		case 8: eliminarArbol(arbol);	
		arbol=NULL;
		printf("\nArbol eliminado con exito!\n\n");
		break;
		case 9: Cargar(arbol);
		break;
		case 10: menuPrincipal();
		break;
		case 0: exit(0);
		default: printf("dato no valido");
		break;
		}	
	}while (opcion!=8);	
	
}
//==============================================================================
Nodo *crearNodo(int n, Nodo *padre){
	
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->derech = NULL;
	nuevo_nodo->izquier = NULL;
	nuevo_nodo->padre=padre;
	return nuevo_nodo;
}
//==============================================================================
void Cargar(Nodo *&arbol){
	int dato;
	archivo = fopen("archivo_cola.txt", "r");
	while(!feof(archivo)){
		fscanf(archivo,"%d\n",&dato);
		printf("dato desde archivo %d\n",dato);
		insertar(arbol, dato,NULL);
		
		
	}printf("Cargado con exito\n");
	fclose(archivo);
}

void insertar(Nodo *&arbol, int n, Nodo *padre){
	
	if (arbol == NULL){
		
		Nodo *nuevo_nodo = crearNodo(n, padre);
		arbol = nuevo_nodo;
		
	}else{
		
		int valorRaiz = arbol->dato;
		
		if ( n < valorRaiz){
			
			insertar(arbol->izquier, n,arbol);
		}else{
			
			insertar(arbol->derech, n, arbol);
		}
	}
}
//==============================================================================
void mostrarArbol(Nodo *arbol, int cont){
	
	if(arbol == NULL){
		
		return;
		
	}else{
		
		mostrarArbol(arbol->derech, cont+1);
		
		for(int i=0; i<cont; i++){
			
			printf("    ");
			
		}
		printf("%d\n", arbol->dato);
		
		mostrarArbol(arbol->izquier, cont+1);
	}
}
//==============================================================================
bool buscarNodo(Nodo *arbol, int n){
	
	if (arbol==NULL){
		
		return false;
		
	}else if(arbol->dato==n){
		
		return true;
		
	}else if(n < arbol->dato){
		
		return buscarNodo(arbol->izquier, n);
		
	}else{
		
		return  buscarNodo(arbol->derech, n);
	}
}
//==============================================================================
void inOrder(Nodo *arbol){
	if(arbol == NULL){
		
		return;
	}else{
		
		inOrder(arbol->izquier);
		printf(" => ");
		printf("%d", arbol->dato);
		inOrder(arbol->derech);
	}
}
//==============================================================================
void posOrder(Nodo *arbol){
	if(arbol == NULL){
		
		return;
	}else{
		
		posOrder(arbol->izquier);
		posOrder(arbol->derech);
		printf(" => ");
		printf("%d", arbol->dato);
	}	
}
//==============================================================================
void preOrder(Nodo *arbol){
	if(arbol == NULL){
		
		return;
	}else{
		printf(" => ");
		printf("%d", arbol->dato);
		preOrder(arbol->izquier);
		preOrder(arbol->derech);
	}	
}
//==============================================================================
void eliminar(Nodo *arbol,int n){
	
	if(arbol == NULL){
		return;
	}else if(n < arbol->dato){
		eliminar(arbol->izquier, n);
	}else if(n > arbol->dato){
		eliminar(arbol->derech, n);	
	}else{
		eliminarNodo(arbol);
	}
}
//==============================================================================
Nodo *minimo(Nodo *arbol){
	if(arbol == NULL){
		
		return NULL;
	}
	if(arbol->izquier){
		
		return minimo(arbol->izquier);
	}else{
		return arbol;
	}
}
//==============================================================================
void eliminarNodo(Nodo *NodoEliminar){
	
	if(NodoEliminar->izquier && NodoEliminar->derech){
		
		Nodo *menor = minimo(NodoEliminar->derech);
		NodoEliminar->dato = menor->dato;
		eliminarNodo(menor);
	}else if(NodoEliminar->izquier){
		reemplazar(NodoEliminar, NodoEliminar->izquier);
		destruirNodo(NodoEliminar);
	}else if(NodoEliminar->derech){
		reemplazar(NodoEliminar, NodoEliminar->derech);
		destruirNodo(NodoEliminar);
	}else{
		reemplazar(NodoEliminar, NULL);
		destruirNodo(NodoEliminar);
	}
}
//==============================================================================
void reemplazar(Nodo *arbol, Nodo *NuevoNodo){
	
	if(arbol->padre){
		if(arbol->padre->izquier!=NULL){
			if(arbol->dato==arbol->padre->izquier->dato){
				arbol->padre->izquier=NuevoNodo;
			}
		}
		if (arbol->padre->derech!=NULL){
			if(arbol->dato==arbol->padre->derech->dato){
				arbol->padre->derech=NuevoNodo;
			}
		}
	}
	if(NuevoNodo){
		NuevoNodo->padre = arbol->padre;
	}
}
//==============================================================================
void destruirNodo(Nodo *nodo){
	
	nodo->izquier = NULL;
	nodo->derech = NULL;
	free(nodo);
}
void eliminarArbol(Nodo *arbol)
{
	if(arbol == NULL){
		return;
	}else {
		eliminarArbol(arbol->izquier);
		eliminarArbol(arbol->derech);
		delete arbol;
	}
}


