/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 10. Escriba un programa que reciba un número n e imprima el enésimo número primo.
Ej: Si recibe 4 el programa debe imprimir 7.
Nota: la salida del programa debe ser: El primo numero 4 es: 7.

*/

#include <iostream>

using namespace std;

bool verificarsiesprimo(int numero);

int main()
{
    int n, i, contador=0, numeroprimo;

    /* Se imprime la funcion del programa */
    cout << "Este programa recibe un numero N e imprime el N-esimo numero primo.\n\n";

    cout << "Ingrese un numero: ";
    cin >> n;

    for(i=2; true ; i++){
        if(verificarsiesprimo(i)==true){
            contador++;
            if(contador==n){
            numeroprimo=i;
            break;
            }
        }
    }
    cout << "El primo numero " << n << " es: " << numeroprimo << "\n\n\n";

    return 0;
}

bool verificarsiesprimo(int numero){
    int i;

    for(i=2; i<numero; i++){
        if(numero%i==0){
            return false;
        }
    }
    return true;
}

