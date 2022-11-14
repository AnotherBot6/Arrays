#include <iostream>
using namespace std; 

//Ejercicio 3

int main()
{
	cout<<"Programa que hace 2 array y los suma : ";
	int columna;
	cout<<"Numero de elementos del array: ";
	cin>>columna;

	float matriz_1[columna], matriz_2[columna], matrizFinal[columna];

	//matriz  1//
	cout<<"Valores del primer array:"<<endl;
	
    for(int y = 0; y < columna; y++)
	{
		cout<<"Elemento "<<y<<":   ";
		cin>>matriz_1[y];
	}


	//matriz  2//
	cout<<"Valores del segundo array:"<<endl;
	for(int y = 0; y < columna; y++)
	{
		cout<<"Elemento "<<y<<":   ";
		cin>>matriz_2[y];
	}
	
	//Sumar arrays
	
	for(int y = 0; y < columna; y++)
	{
		matrizFinal[y] = matriz_1[y] + matriz_2[y];
	}
	

	cout<<"La suma es: "<< endl;
	
	cout<<"{ ";
	for(int y = 0; y < columna; y++)
	{
		cout<<matrizFinal[y]<<" ";
	}
	cout<<"}"<<endl;
	

}
