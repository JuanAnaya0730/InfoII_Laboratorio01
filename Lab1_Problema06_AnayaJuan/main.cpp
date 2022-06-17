/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 6. Escriba un programa que encuentre el valor aproximado del número de euler en base
a la siguiente suma infinita:

                        e=(1/0!)+(1/1!)+(1/2!)+(1/3!)+(1/4!)+(1/5!)+...

El usuario debe ingresar el número de elementos usados en la aproximación.
Ej: si se ingresa 3 e=(1/0!)+(1/1!)+(1/2!)=2.5
Nota: el formato de salida debe ser: e es aproximadamente: 2.5

*/

#include <iostream>

using namespace std;

float factorial(float numero);
    /* La funcion 'factorial' calculara el factorial de un numero. */

int main()
{
    int num;
    float euler=0;

    /* Se imprime la funcion del programa */
    cout << "Este programa calculara el valor aproximado de e con base a un numero que sera ingresado y la suma:\n"
            "                   e=(1/0!)+(1/1!)+(1/2!)+(1/3!)+(1/4!)+(1/5!)+...\n\n";

    //Se pide al usuario el numero de elementos que seran usados en la aproximacion
    cout << "Ingresa el numero de elementos para la aproximacion: ";
    cin >> num;

    //Se itera num veces
    for(float i=0; i<num; i++ ){
        euler+=(1/factorial(i));
    }

    //se imprime el valor aproximado de e con base al numero ingresado inicialmente
    cout << "\ne es aproximadamente: " << euler <<"\n\n\n";

    return 0;
}

float factorial(float numero){
//  factorial: Variable que almacenara el factorial del numero ingresado

    float factorial;

    factorial=1;

    for(float i=1; i<=numero; i++){
        factorial*=i;
    }

    return factorial;
}
