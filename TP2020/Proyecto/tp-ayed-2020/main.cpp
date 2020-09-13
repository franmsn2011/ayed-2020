#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <stdio.h>

#include "Sucursal.h"
#include "ListaSucursal.h"

using namespace std;

//LEER
void leer_archivoDatos(ListaPuntajes &puntajes);

int main()
{
    //CARACTERES SPANISH
    setlocale(LC_ALL,"Spanish");

    //CARGA ARCHIVO
    leer_archivoDatos(puntajes);

    //LISTAS

    //MENU PRINCIPAL
   int opcion=0;

    while(opcion!=8){
        system("cls");
        cout << "Men� principal" << endl << "-----------------------" << endl << "1- Ranking por facturaci�n" << endl << "2- Ranking por cantidad de art�culos" << endl << "3- Ranking de rendimiento por m2" << endl << "8- Volver" << endl << endl << "Ingrese una opci�n: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                //Ranking por facturaci�n

                cout << endl << "-----------------------" << endl << "Ranking por facturaci�n" << endl << endl;
                system("pause");
                break;
            case 2:
                //Ranking por cantidad de art�culos

                cout << endl << "-----------------------" << endl << "Ranking por cantidad de art�culos" << endl << endl;
                system("pause");
                break;
            case 3:
                //Ranking de rendimiento por m2

                cout << endl << "-----------------------" << endl << "3- Ranking de rendimiento por m2" << endl << endl;
                system("pause");
                break;
            default:
                break;
        }
    }

    //FIN
    return 0;
}

void leer_archivo(ListaSucursal &sucursales){
    Sucursal sucursal;
    crear(sucursal);

    string id,provincia,articulos,facturacion,metros,casaMatriz;

    ifstream archivo;
    archivo.open("Datos.txt",ios::in);
    if(archivo.fail()){
        cout << "ERROR!: No se pudo abrir el archivo" << endl;
    }
    else {
        while(getline(archivo,id,'-')&&getline(archivo,provincia,'-')&&getline(archivo,articulos,'-')&&getline(archivo,facturacion,'-')&&getline(archivo,metros,'-')&&getline(archivo,casaMatriz,'-')){
            setId(sucursal,atoi(id.c_str()));
            setProvincia(sucursal,provincia.c_str());
            setArticulos(sucursal,atoi(articulos.c_str()));
            setFacturacion(sucursal,atof(facturacion.c_str()));
            setMetros(sucursal,atof(metros.c_str()));
            setCasaMatriz(sucursal,atoi(casaMatriz.c_str()));
            adicionarFinal(puntajes,sucursal);
        }
    }
    archivo.close();

    destruir(sucursal);
}
