/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 12. Escriba un programa que calcula el máximo factor primo de un número.
Ej: Si se recibe 33 el programa debe imprimir 11.
Nota: la salida del programa debe ser: El mayor factor primo de 33 es: 11.

*/

#include <iostream>

using namespace std;

bool esPrimo(int numero);

int main()
{
    int num, max=0;

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa recibe un numero entero y calcula su maximo factor primo.\n\n";

    /* Se le pide al usuario que ingrese un numero */
    cout << "Ingrese un numero: ";
    cin >> num;

    /* Se calcula el maximo factor primo de num */
    for(int i=2; i<num; ++i){
        if(esPrimo(i)){
            for(int j=1; j<num/2; ++j){
                if(i*j == num && i>max){
                    max = i;
                }
            }
        }
    }

    /* Se imprime en pantalla el maximo factor primo de num */
    cout << "\nEl mayor factor primo de " << num << " es: " << max << endl;

    return 0;
}

bool esPrimo(int numero){
    for(int i=2; i<numero; i++){
        if(numero%i==0){
            return false;
        }
    }

    return true;
}
