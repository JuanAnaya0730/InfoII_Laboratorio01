/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 7. En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y
1. Ej: 1, 1, 2, 3, 5, 8, ....
Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie
de Fibonacci menores a n.
Ej: si se ingresa 10, sería la suma de 2+8 =10
Nota: el formato de salida debe ser: El resultado de la suma es: 10

*/

#include <iostream>

using namespace std;

int main()
{
    int N; // N es la variable que almacenara el numero limite para la suma.
    int A=1; // A es la variable que almacenara el termino an-2 de la serie.
    int B=1; // B es la variable que almacenara el termino an-1 de la serie.
    int C=0; // C es la variable que almacenara el termino an de la serie.
    int suma=0; // suma es la variable que almacenara la suma deseada.

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa recibe un numero N e imprime en pantalla la suma de todos los numeros pares "
            "de la serie Fibonacci menores que N.\n\n";

    /* Se le pide al usuario que ingrese el numero limite para la suma */
    cout << "Ingrese un numero(N): ";
    cin >> N;

    /* Este ciclo se encargara de calcular los valores de la serie */
    while(true){
        C=A+B;

        /* Se el valor de C es mayor que el de N se rompe el ciclo */
        if(C>N){
            break;
        }

        /* Se verifica si el nuevo numero de la serie es un numero par, en caso de cumplirse
           a 'suma' se le sumara el valor de C */
        if(C%2==0){
            suma+=C;
        }

        /* Se actualizan los valores de A y B */
        A=B;
        B=C;
    }

    /* Se imprime en pantalla la suma de todos los pares de la serie menores que N */
    cout << "\nEl resultado de la suma es: " << suma << endl << endl;

    return 0;
}
