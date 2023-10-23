// Materia: Programación I, Paralelo 1

// Autor: leonardo romero

// Fecha creación: 22/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 3

// Problema planteado:  Realizar un algoritmo recursivo, dado un vector de números enteros, retorne la suma de sus elementos.
#include <iostream>
#include <vector>

using namespace std;
unsigned int sumavector (unsigned int[], unsigned int);

int main()
{
    unsigned int numeros[]={1,3,5,6,7};
    cout<<(sumavector(numeros, 4))<<endl; //se suma los digitos del vector desde la posicion 4

}
unsigned int sumavector(unsigned int x[], unsigned int a)
{
    if (a==0)
        return x[0];
    else
        return x[a]+sumavector(x,a-1);
}
