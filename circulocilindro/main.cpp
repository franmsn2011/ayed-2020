#include <iostream>
#include "Circulo.h"
#include "Cilindro.h"

using namespace std;

/**
1) Dise�ar la especificaci�n e implementar un TDA que represente un C�rculo con las siguientes
caracter�sticas: radio, di�metro, per�metro, superficie.

2) A partir del TDA C�rculo, dise�ar la especificaci�n e implementar el TDA Cilindro con las
siguientes caracter�sticas: radio de la base, per�metro de la base, superficie de la base, altura,
volumen, superficie lateral.
*/

int main()
{
    std::setlocale(LC_ALL, "spanish");

    Circulo circulo;

    constructor(circulo);

    cout << "Radio: " << getRadio(circulo) << endl;
    cout << "Di�metro: " << getDiametro(circulo) << endl;
    cout << "Per�metro: " << getPerimetro(circulo) << endl;
    cout << "Superficie: " << getSuperficie(circulo) << endl;

    destructor(circulo);

    Cilindro cilindro;

    constructor(cilindro);
    setRadio(cilindro, 2);
    cout << "Radio: " << getRadio(cilindro) << endl;
    cout << "Di�metro: " << getDiametro(cilindro) << endl;
    cout << "Per�metro: " << getPerimetro(cilindro) << endl;
    cout << "Superficie Base: " << getSuperficieBase(cilindro) << endl;
    cout << "Superficie: " << getSuperficie(cilindro) << endl;
    cout << "Vol�men: " << getVolumen(cilindro) << endl;
    destructor(cilindro);
    return 0;
}
