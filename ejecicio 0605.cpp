// Materia: Programación I, Paralelo 1

// Autor: leonardo romero

// Fecha creación: 22/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 5

// Problema planteado:  Realizar un algoritmo recursivo para comparar si dos vectores son iguales
#include <iostream>
#include <vector>

using namespace std;
bool comparacion (unsigned int [], unsigned int[], unsigned int);

int main()
{
    unsigned int vec1[]={1,2,3,4,5};
    unsigned int vec2[]={1,2,3,4,5};

    bool resultado = comparacion(vec1, vec2, 4 ); //se hace una funcion booleana para comparar los vectores

    if(resultado){
        cout<<"son iguales"<<endl;
    }
    else {
        cout<<"no son iguales"<<endl;
    }
}
bool comparacion (unsigned int vector1[], unsigned int vector2[], unsigned int x)
{
    if(vector1==vector2){
        return false;
    }
    if (x<0){
        return true;
    }
    if (vector1[x]!=vector2[x]){
        return false;
    }
    return comparacion(vector1,vector2,x-1);

}
