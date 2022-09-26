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
    std::cout << "Example.getValue() => " << example.getValue() << std::endl; //dejamos el ejemplo como prueba 

    int num;
    foobar::Example esPar{};
    cout << "Ingrese un numero, distinto de 0, para verificar si es par: " << endl;
    cin >> num; //pido que el usuario ingrese por consola un numero
    bool respuesta= esPar.esPar(num); //llamo a la función y almaceno lo que devuelve en una nueva variable llamada num
    if(respuesta==true){ //decido si es par o impar en base al resultado booleano almacenado en la variable nueva
        cout << "El numero ingresado es par" << endl;
    }
    else {
        cout << "El numero ingresado es impar" << endl;
    }

    char letra;
    cout << "Ingrese una letra para verificar si es una vocal: " << endl;
    cin >> letra; //pido al usuario que ingrese una letra
    foobar::Example esVocal{};
    bool respuesta2 = esVocal.esVocal(letra); //llamo a la función y almaceno lo que devuelve en una nueva variable llamada letra
    if (respuesta2 == true) { //decido si es vocal o no en base al resultado del booleano almacenado en la variable nueva
        cout << "La letra ingresada es vocal" << endl;
    }
    else {
        cout << "La letra ingresada no es vocal" << endl;
    }
     
    return EXIT_SUCCESS;
}

/*foobar::Example example{};
cout << "Example.getValue() => " << example.getValue() << endl;*/