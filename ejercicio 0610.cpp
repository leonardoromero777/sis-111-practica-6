// Materia: Programación I, Paralelo 1

// Autor: leonardo romero

// Fecha creación: 22/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 10

// Problema planteado: Realizar un algoritmo recursivo para calcular el coeficiente binomial a partir de la lectura de dos números enteros,
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

//Muestra el factorial de un número
unsigned int factorial(unsigned int x)
{
    if (x == 0) // Condición de SALIDA - CASO BASE
        return 1;
    else
        x = x * factorial(x-1);
        return x;

}
