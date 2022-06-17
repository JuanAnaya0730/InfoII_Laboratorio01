/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 2. Se necesita un programa que permita determinar la mínima combinación de billetes
y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,
$20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
Hacer un programa que entregue el número de billetes y monedas de cada denominación para
completar la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede
lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla.
Ej: si se ingresa 47810, el programa debe imprimir:
50000 : 0
20000: 2
10000 : 0
5000: 1
2000 : 1
1000: 0
500 : 1
200: 1
100 : 1
50: 0
Faltante: 10

*/

#include <iostream>

using namespace std;

int main()
{
    long int dinero; // dinero es la variable que almacenara el dinero ingresado.
    long int residuo; // residuo es la variable que almacenara el residuo de dividir 'dinero' entre cuanquiera de las denominaciones de billetes y monedas.
    int combinacion; // combinacion es la variable que almacenara la minima combinacion de 'dinero' para cualquiera de las denominaciones de billetes y monedas.

    /* Se imprime la funcion del programa */
    cout << "Este programa calcula la minima cantidad de billetes y monedas para una cantidad de dinero determinada.\n\n";

    /* Se le pide al usuario que ingrese la cantidad de dinero*/
    cout << "Ingrese la cantidad de dinero: ";
    cin >> dinero;

    cout << "\nLa combinacion de billetes y monedas para " << dinero << " es: \n";

    //Se calcula la combinacion para $50000
    combinacion=dinero/50000;
    residuo=dinero%50000;
    cout << "$50000: " << combinacion << endl;

    //Se calcula la combinacion para $20000
    combinacion=residuo/20000;
    residuo=residuo%20000;
    cout << "$20000: " << combinacion << endl;

    //Se calcula la combinacion para $10000
    combinacion=residuo/10000;
    residuo=residuo%10000;
    cout << "$10000: " << combinacion << endl;

    //Se calcula la combinacion para $5000
    combinacion=residuo/5000;
    residuo=residuo%5000;
    cout << "$5000:  " << combinacion << endl;

    //Se calcula la combinacion para $2000
    combinacion=residuo/2000;
    residuo=residuo%2000;
    cout << "$2000:  " << combinacion << endl;

    //Se calcula la combinacion para $1000
    combinacion=residuo/1000;
    residuo=residuo%1000;
    cout << "$1000:  " << combinacion << endl;

    //Se calcula la combinacion para $500
    combinacion=residuo/500;
    residuo=residuo%500;
    cout << "$500:   " << combinacion << endl;

    //Se calcula la combinacion para $200
    combinacion=residuo/200;
    residuo=residuo%200;
    cout << "$200:   " << combinacion << endl;

    //Se calcula la combinacion para %100
    combinacion=residuo/100;
    residuo=residuo%100;
    cout << "$100:   " << combinacion << endl;

    //Se calcula la combinacion para $50
    combinacion=residuo/50;
    residuo=residuo%50;
    cout << "$50:    " << combinacion << endl;

    //Se imprime el fatante
    cout << "Faltante: " << residuo << endl << endl;

    return 0;
}
