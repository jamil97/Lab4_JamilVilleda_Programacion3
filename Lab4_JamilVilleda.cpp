#include <iostream>
#include <stdlib.h>

using namespace std;

void Ruffini();
int*** crearMatriz(int);
void imprimirMatriz(int***, int, int);

int main(){
	int opcion = 0;
	cout<<"EL SEGUNDO DA SOLO NO IMPRIMO EL RESULTADO PERO TODO DA"<<endl;
	cout<<"Porfavor digite la opcion deseada: "<<endl;
	cout<<"1. Years: "<<endl;
	cout<<"2. Teorema de Ruffini: "<<endl;
	cout<<"3. Cifrado de Playfair: "<<endl;
	cin>>opcion;

	switch (opcion){
	
		case 1:


			break;
		case 2:
			Ruffini();
			
			break;
		case 3:


			break;
	}

}// Fin main

void Ruffini(){

	int polinomioAlto = 0;
	int a = 0;
	int*** matriz = NULL;
	int valores = 0;
	cout<<"Ingrese el polinomio de nivel mas alto: "<<endl;
	cin>>polinomioAlto;
	int polinomioAltoAvanzado = polinomioAlto+1;
	cout<<"Ingrese el valor de a: "<<endl;
	cin>>a;
	matriz = crearMatriz(polinomioAltoAvanzado);
	int contador = 0;

	for(int i = 0; i<polinomioAltoAvanzado; i++){
		cout<<"Ingrese el valor de la casilla x'"<<i<<": "<<endl;
		cin>>valores;
		matriz[0][0][i] = valores;
		valores = 0;
	}
        
	
	for(int i = 0; i < polinomioAltoAvanzado; i++){
		for(int j = 0; j <polinomioAltoAvanzado; j++){
			matriz[i][0][j] = matriz[0][0][j];
			matriz[i][2][0] = matriz[0][0][0];
		}
	}

	for(int i = 0; i <polinomioAltoAvanzado; i++ ){
		for(int j=0; j<3; j++){
			for(int k = 0; k<polinomioAltoAvanzado; k++){
				matriz[i][1][k+1] = matriz[i][2][k]*a;
				matriz[i][2][k+1] = matriz[i][0][k+1]+matriz[i][1][k+1];	
			}
		}		
	}

      	imprimirMatriz(matriz, polinomioAltoAvanzado, a);


  /*	for(int i = 0; i <polinomioAltoAvanzado; i++ ){
		for(int j = 0; j<3; j++){
			for(int k=0; k<polinomioAltoAvanzado; k++){
			
			}
		}
	}*/


}


void imprimirMatriz(int *** matriz, int polinomio, int a){
	for(int i = 0; i <polinomio; i++ ){
		for(int j = 0; j<3; j++){
				for(int k=0; k<polinomio; k++){
					cout<<"[ "<<matriz[i][j][k]<<" ]";
				}
				cout<<"|"<<a<<endl;	
			
		}
		cout<<endl;
	}
}

int*** crearMatriz (int n){

	int*** matriz = new int **[n];
	for(int i = 0; i <n; i++ ){

		matriz[i] = new int*[3];	
	}

	for(int i = 0; i < n; i++){
		for(int j =0; j<3; j++){
			matriz[i][j] = new int [n];
		}
	}	
return matriz;
}



void Cifrado(){


}



