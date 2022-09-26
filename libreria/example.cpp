#include "example.h"

namespace foobar
{
    int Example::getValue() const
    {
        return 99;
    }

    bool Example::esPar(int numero) {
        if (numero % 2 == 0 && numero != 0) {
            return true;
        }
        else {
            return false;
        }
    }

    bool Example::esVocal(char letra) {
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            return true;
        }
        else {
            return false;
        }
    }

}
