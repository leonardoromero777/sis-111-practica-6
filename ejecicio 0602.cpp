// Materia: Programación I, Paralelo 1

// Autor: leonardo romero

// Fecha creación: 22/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 2

// Problema planteado:  Realizar un algoritmo para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,..., para n términos
#include <iostream>

using namespace std;

int numero(int);

int suma(int);

int main()
{
    int termino;
    cout<<"ingrese un numero"<<endl;
    cin>>termino;
    for(int i = 1; i <= termino; i++)
        cout<<numero(i)<<"\t";

    return 0;
}
int numero(int x)
{
    if(x == 1 || x == 2) //si el numero es 2 o menor la secuencia es 1 1
        return 1;
    else
        return suma(numero(x - 1)) + numero(x - 1);
}


int suma(int num)
{
    if(num == 0)
        num = 0;
    else
    return num % 10 + suma(num / 10);
}
