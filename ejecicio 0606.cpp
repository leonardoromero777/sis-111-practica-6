// Materia: Programaci�n I, Paralelo 1

// Autor: *******

// Fecha creaci�n: 16/10/2023

// Fecha modificaci�n: 17/10/2023

// N�mero de ejericio: 1

// Problema planteado: *******
#include <iostream>
#include <string>
using namespace std;

bool simetrico( string cadena, int ini, int fin) {

    if (ini >= fin) {
        return true;
    }

    if (cadena[ini] != cadena[fin]) {
        return false;
    }

    return simetrico(cadena, ini + 1, fin - 1);
}

int main() {
    string texto;
    cout << "Ingrese una cadena de caracteres: ";
    cin >> texto;

    bool resultado = simetrico(texto, 0, texto.length() - 1);

    if (resultado) {
        cout << "La cadena es simetrica." << endl;
    } else {
        cout << "La cadena no es simetrica." << endl;
    }

    return 0;
}



