/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 1. Escriba un programa que identique si un carácter ingresado es una vocal,
una consonante o ninguna de las 2 e imprima un mensaje según el caso.
Nota: el formato de salida debe ser:
no es una letra.
a es una vocal.
C es una consonante.

*/

#include <iostream>

using namespace std;

int main()
{
    char C; // C es la variable que almacenara el caracter ingresado.

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa recibe un caracter e imprime en pantalla si es una vocal, "
            "una consonate o no es una letra.\n" << endl;

    /* Se le pide al usuario que ingrese un caracter */
    cout << "Ingrese un caracter: ";
    cin >> C;

    /* Se verifica si el caracter ingresado es una letra */
    if((C>=65 and C<=90) || (C>=97 and C<=122)){

        /* Se verifica si la letra ingresada es una vocal */
        if(toupper(C)=='A' || toupper(C)=='E' || toupper(C)=='I' || toupper(C)=='O' || toupper(C)=='U'){
            /* Se imprime en pantalla que la letra ingresada fue una vocal */
            cout << endl << C << " es una vocal." << endl;
        }
        else {
            /* Se imprime en pantalla que la letra ingresada es una consonante */
            cout << endl << C << " es una consonante." << endl;
        }
    }
    else{
        /* Dado que el condicional anterior no se cumple se concluye que el caracter ingresado
           no e una letra, y se imprime en pantalla el mensaje correspondiente. */
        cout << "\nno es una letra." << endl;
    }

    cout << endl;

    return 0;
}
