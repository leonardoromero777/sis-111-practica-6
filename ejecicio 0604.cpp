// Materia: Programaci�n I, Paralelo 1

// Autor: leonardo romero

// Fecha creaci�n: 22/10/2023

// Fecha modificaci�n: 23/10/2023

// N�mero de ejericio: 4

// Problema planteado:  Realizar un algoritmo recursivo que escriba al rev�s una cadena
#include <iostream>
#include <vector>

using namespace std;
void alreves (unsigned int[] , unsigned int);
int main()
{
    unsigned int cadena[]={1,2,3,4,6};

    alreves(cadena, 6);
}

void alreves ( unsigned int x[], unsigned int a)
{
    if (a>= 0)
    {
        cout<< x[a];
        alreves(x, a-1); //llama la funcion y va leyendo el vector hacia atras
    }
}
