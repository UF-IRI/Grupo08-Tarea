#include <cstdlib>
#include <iostream>

#include "archivo.h"
#include "example.h"

using namespace std;

bool esPar(int numero);
bool esVocal(char letra);

int main(int argc, char** argv)
{
    foobar::Example example{};
    std::cout << "Example.getValue() => " << example.getValue() << std::endl;
    int num;
    foobar::Example esPar{};
    cout << "Ingrese un numero, distinto de 0, para verificar si es par: " << endl;
    cin >> num;
    bool respuesta= esPar.esPar(num);
    if(respuesta==true){
        cout << "El numero ingresado es par" << endl;
    }
    else {
        cout << "El numero ingresado es impar" << endl;
    }

    char letra;
    cout << "Ingrese una letra para verificar si es una vocal: " << endl;
    cin >> letra;
    foobar::Example esVocal{};
    bool respuesta2 = esVocal.esVocal(letra);
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