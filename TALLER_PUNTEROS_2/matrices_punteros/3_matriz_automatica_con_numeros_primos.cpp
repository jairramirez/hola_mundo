#include <stdio.h>
#include <stdlib.h>
void matrizNumerosPrimos();
int main() {
	matrizNumerosPrimos();
	return 0;
}
void matrizNumerosPrimos()
{
	
	int vectorPrimo[9];
	int cont=0;
	int matriz[3][3];
	int* pvector=vectorPrimo;
	int* pm=&matriz[0][0];
	int fil=23;
	int col=23;
	int f=3;
	int c=3;
	for (int j=2;j<=fil;j++){
		int cont2=0;
		for(int i=1;i<=col;i++){
			if(j%i==0){
				cont2++;
			} 
		}
		if (cont2==2){
			*(pvector+cont)=j;
			cont++;
		} 
	}
	
	int cont3=0;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			*(pm+i+j *c)=*(pvector+cont3);
			cont3++;
		}
	}
	printf("\n Mostrando Matriz con Numeros Primos\n");
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			printf("%d ",*(pm+i+j *c));
		}
		printf("\n");
	}
}


