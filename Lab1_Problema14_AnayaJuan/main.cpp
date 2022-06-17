/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 14. Un número palíndromo es igual de derecha a izquierda y de izquierda a derecha,
Ej: 969. escriba un programa que calcule el número palíndromo más grande que se puede obtener
como una multiplicación de números de 3 dígitos.
Ej: una de las posibles respuestas es: 143*777=111111.
Nota: la salida del programa debe ser: 143*777=111111

*/

#include <iostream>

using namespace std;

bool esPalindromo(int num);

int main()
{
    int mayor = 0, numA, numB;

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa calcula el numero palindromo mas grande que se puede "
            "obtener como una multiplicacion de numeros de 3 digitos.\n\n";

    /* Se calcula mayor producto palindromo entre dos numeros de tres cifras */
    for(int i=100; i<999; ++i){
        for(int j=100; j<999; ++j){
            if(esPalindromo(i*j) && (i*j)>mayor){
                numA = i;
                numB = j;
                mayor = i*j;
            }
        }
    }

    /* Se eimprime en pantalla el resultado */
    cout << numA << "*" << numB << "=" << mayor << endl;

    return 0;
}


bool esPalindromo(int num)
{
    int numReverse = 0, aux = num;

    do{
        numReverse *= 10;
        numReverse += aux % 10;
        aux /= 10;
    }while(aux>0);

    if(numReverse != num){
        return false;
    }

    return true;
}
