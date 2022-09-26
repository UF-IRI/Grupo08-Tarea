#include <cstdlib>
#include <iostream>

#include "archivo.h"

using namespace std;

int main(int argc, char** argv)
{
    int num;
    cout << "Ingrese un numero, distinto de 0, para verificar si es par: " << endl;
    cin >> num;
    bool respuesta= esPar(num);
    if(respuesta==true){
        cout << "El numero ingresado es par" << endl;
    }
    else {
        cout << "El numero ingresado es impar" << endl;
    }

    char letra;
    bool respuesta2 = esVocal(letra);
    if (respuesta2 == true) {
        cout << "La letra ingresada es vocal" << endl;
    }
    else {
        cout << "La letra ingresada no es vocal" << endl;
    }
     
    return EXIT_SUCCESS;
}

/*foobar::Example example{};
cout << "Example.getValue() => " << example.getValue() << endl;*/