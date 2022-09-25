#include "archivo.h"

bool esPar(int numero) {
    if(numero%2==0 && numero!=0){
        return true;
    }
    else {
        return false;
    }
}

bool esVocal(char letra) {
    if (letra == 'a' || letra == 'e' || letra'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra'I' || letra == 'O' || letra == 'U') {
        return true;
    }
    else {
        return false;
    }
}
