/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 9. Escriba un programa que pida un número entero N e imprima el resultado de la suma
de todos sus dígitos elevados a sí mismos.
Ej: si se ingresa 1223 el resultado sería 1^1 + 2^2 + 2^2 + 3^3 = 36
Nota: la salida del programa debe ser: El resultado de la suma es: 36.

*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int N; // N es la variable que almacenara el numero ingresado por el usuario.
    int suma=0; // suma el la variable que almacenara el resultado de la suma de los numeros.
    int i; // i es la variable que ira almacenando cada digito de N.

    /* Se imprime la funcion del programa */
    cout << "Este programa recibe un numero y muestra en pantalla el resultado de "
            "la suma de todos sus digitos elevados a si mismos.\n\n";

    /* Se le pide al usuario que ingrese un numero */
    cout << "Ingrese un numero: ";
    cin >> N;

    /* Este ciclo se encargara de elevar los digitos de N a si mismos y sumarlos */
    while(N>0){
        i=N%10;
        N=N/10;
        suma+=pow(i, i);
    }

    /* Se imprime en pantalla el resultado de la suma */
    cout << "\nEl resultado de la suma es: " << suma << endl << endl;

    return 0;
}
