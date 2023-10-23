// Materia: Programaci�n I, Paralelo 1

// Autor: leonardo romero

// Fecha creaci�n: 22/10/2023

// Fecha modificaci�n: 23/10/2023

// N�mero de ejericio: 10

// Problema planteado: Realizar un algoritmo recursivo para calcular el coeficiente binomial a partir de la lectura de dos n�meros enteros,
#include <iostream>
#include <wchar.h>

using namespace std;


unsigned int factorial(unsigned int);

int main()
{
    unsigned int n;
    setlocale(LC_ALL, "");
    cout << "Ingrese un valor: ";
    cin >> n;
    cout << "El factorial de " << n << " es igual a " << factorial(n)<<endl;
    unsigned int m;
    cout<< "ingrese un valor: ";
    cin>> m;
    cout<<"el valor binominal es: "<<factorial(n)/(factorial(n-m)*factorial(m))<<endl; //llamamos la funcion para calcular los 2 variables deacxuerod a la formula

    return 0;
}

//Muestra el factorial de un n�mero
unsigned int factorial(unsigned int x)
{
    if (x == 0) // Condici�n de SALIDA - CASO BASE
        return 1;
    else
        x = x * factorial(x-1);
        return x;

}
