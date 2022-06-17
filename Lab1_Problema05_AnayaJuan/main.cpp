/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 5. Escriba un programa que muestre el siguiente patrón en la pantalla:

                           *
                          ***
                         *****
                        *******
                         *****
                          ***
                           *

El tamaño del patrón estará determinado un número entero impar que ingrese el usuario. En el
ejemplo mostrado, el tamaño de la gura es 7.

*/

#include <iostream>

using namespace std;

int main()
{
    int N; // N es la variable que almacenara la cantidad de asteriscos que tendra la diagonal de la figura.

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa recibe un numero N(impar) e imprime en pantalla un rombo de asteriscos, "
            "siendo N la cantidad de asteriscos de su diagonal.\n\n";

    /* Se le pide al usuario que ingrese un numero */
    cout << "Ingrese un numero impar: ";
    cin >> N;

    /* Este ciclo se encargara de imprimir la parte superior del rombo */
    for(int i=(N-1)/2; i>=0; i--){
        /* Este ciclo se encarga de imprimir los espacios de la parte superior del rombo */
        for(int h=i; h>0; h--){
            cout << " ";
        }
        /* Este ciclo se encarga de imprimir los asteriscos de la parte superior del rombo */
        for(int h=1; h<=N-i*2; h++){
            cout << "*";
        }
        /* Se imprime un salto de linea al final de cada fila */
        cout << endl;
    }

    /* Este ciclo se encargara de imprimir la parte inferior del rombo */
    for(int i=1; i<=(N-1)/2; i++){
        /* Este ciclo se encarga de imprimir los espacios de la parte inferior del rombo */
        for(int h=i; h>0; h--){
            cout << " ";
        }
        /* Este ciclo se encarga de imprimir los asteriscos de la parte inferior del rombo */
        for(int h=N-i*2; h>0; h--){
            cout << "*";
        }
        /* Se imprime un salto de linea al final de cada fila */
        cout << endl;
    }

    return 0;
}
