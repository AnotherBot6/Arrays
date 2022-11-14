#include <iostream>
using namespace std;





void terminator(int arreglo[], int n)
{
int cont=0;
for (int i = 0; i < n ; i++) {                                                      //Inicia ciclo para evaluar la n cantidad de elementos del arreglo
if ( i==0 && arreglo[i] > arreglo[i + 1] || i==n && arreglo[i] > arreglo[i + 1])
cout << i << " ";

else if (arreglo[i] > arreglo[i - 1] && arreglo[i] > arreglo[i + 1])                 //Se evalua en las distintas posiciones
cout << i << " ";
else if (arreglo[i] <= arreglo[i - 1] || arreglo[i] <= arreglo[i + 1])
cont=cont+1;
}
if (cont >= n)
cout <<"-1 ";                // Si no hay Terminators se imprime -1
}
int main() {
int arreglo[]={5, 10, 20, 15};      //Declaras la matriz a evaluar
int n =4;           //Declaras la cantidad de elementos de la matriz
cout << "[5, 10, 20, 15]" << endl;
cout << "Posicion del numero mas grande: ";
terminator(arreglo, n);             //Se manda a llamar a la funcion

return 0;

}
