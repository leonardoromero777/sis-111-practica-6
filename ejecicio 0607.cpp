// Materia: Programaci�n I, Paralelo 1

// Autor: leonardo romero

// Fecha creaci�n: 22/10/2023

// Fecha modificaci�n: 23/10/2023

// N�mero de ejericio: 7

// Problema planteado:  problema conejos
#include <iostream>


using namespace std;

int problema (int);
int main()
{
    int mes;
    cout<<"introuzca los meses: ";
    cin>>mes;
    cout << "en " << mes << " meses habra " << problema(mes) << " pares de conejos para vender." <<endl; //llamamos la funcion y calcula cuantos conejos se reporducen de 2 en 2 cada 4 meses
}
int problema (int a)
{
    if (a<=2)
        return 1;
    else
        return problema(a-1)+problema(a-2);
}
