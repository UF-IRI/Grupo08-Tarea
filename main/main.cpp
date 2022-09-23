#include <cstdlib>
#include <iostream>

#include "example.h"

using namespace std;
bool esPar(int numero);

int main(int argc, char** argv)
{
    int num;
    foobar::Example example{};
    cout << "Example.getValue() => " << example.getValue() << endl;
    cout << "Ingrese un numero, distinto de 0, para verificar si es par: " << endl;
    cin >> num;
    bool respuesta= esPar(num);
    if(respuesta==true){
        cout << "El numero ingresado es par" << endl;
    }
    else {
        cout << "El numero ingresado es impar" << endl;
    }
     
    return EXIT_SUCCESS;
}

