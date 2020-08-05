#include <iostream>

using namespace std;

void arreglo1(int tam, int a[]);
void mostrar(int tam, int a[]);
void mostrarProducto(int tam, int a[]);
void rango (int tam, int a[]);

int main()
{
    int numero[100];
    cout << "Ingrese los 10 valores del arreglo: " << endl;

    arreglo1(10, numero);
    mostrar(10,numero);
    cout << endl;
    mostrarProducto(10,numero);




    return 0;
}

void arreglo1(int tam , int a[]){

    for (int i=1;i<=tam;i++ ){
    do{
        cin >> a[i];
        if ( a[i]<50|| a[i]>100){
        cout << "Ingrese valor correcto  entre 50 y 100: " ;
    }


} while ( a[i]<50|| a[i]>100);
    }
}


void mostrar(int tam, int a[]){
    cout << "Arreglo 1: ";
  for (int i=1;i<=tam;i++){
    cout << a[i] << "  ";

  }
}

void mostrarProducto(int tam, int a[]){
    cout << "Arreglo 2: ";
  for (int i=1;i<=tam;i++){
        cout << a[i] *0.5 << "  ";
  }
}

void rango (int tam, int a[]){
    bool valor;
  for (int i=1;i<=tam;i++){
  if (a[i] >=50  && a[i] <=100){
   valor =true ;
  } else {
   valor= false ;
  }
}
}
