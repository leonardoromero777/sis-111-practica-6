// Materia: Programación I, Paralelo 1

// Autor: leonardo romero

// Fecha creación: 22/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 1

// Problema planteado:  Realizar un algoritmo recursivo para calcular el máximo común divisor de dos números enteros aplicando el algoritmo de Euclides.
#include <iostream>
#include <wchar.h>

using namespace std;
unsigned int mcd (unsigned int, unsigned int);
int main()
{
    unsigned int n;
    unsigned int m;
    cout<<"ingrese un digito: "<<endl;
    cin>>n;
    cout<<"ingrese un digito: "<<endl;
    cin>>m;
    cout<<"el mcd de los 2 numeros es: "<<mcd(n,m)<<endl;
}
unsigned int mcd (unsigned int x, unsigned int y)
{
    if (y==0)
        x=1;
    else
        x=mcd(y, x%y); //se llama la funcion y se saca l residuo de los 2 digitos
}
