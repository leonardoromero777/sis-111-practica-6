// Materia: Programación I, Paralelo 1

// Autor: leonardo romero

// Fecha creación: 22/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 8

// Problema planteado:  Realizar un algoritmo recursivo que nos diga si una cadena de caracteres es simétrica

#include <iostream>
#include <string>
using namespace std;

bool simetrico( string , int , int );

int main() {
    string texto;
    cout << "Ingrese una cadena de caracteres: ";
    cin >> texto;

    bool resultado = simetrico(texto, 0, texto.length() - 1); //va leyendo el texto desde la posicion 0

    if (resultado) {
        cout << "La cadena es simetrica." << endl;
    } else {
        cout << "La cadena no es simetrica." << endl;
    }

    return 0;
}
bool simetrico( string cadena, int ini, int fin) {

    if (ini >= fin) {
        return true;
    }

    if (cadena[ini] != cadena[fin]) {
        return false;
    }

    return simetrico(cadena, ini + 1, fin - 1);


}
