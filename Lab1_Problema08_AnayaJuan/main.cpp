/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 8. Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los
múltiplos de a y b que sean menores a c. Tenga en cuenta no sumar 2 veces los múltiplos comunes.
Ej: para a=3, b=5 y c=10. Se sumarían 3+6+9+5=23
Para a=5, b=7 y c=36. Se sumarían 5+10+15+20+25+30+35+7+14+21+28 = 210.
Nota: el formato de salida debe ser:
m11 + m12 + m13 + . . . + m21 + m22 + m23. . . = sumatoria.
m11 representa el primer múltiplo de a y así sucesivamente. m21 representa el primer múltiplo de b
y así sucesivamente.

*/

#include <iostream>

using namespace std;

bool buscar(int array[], int num);

int main()
{
    int a, b, c, suma = 0;
    int multiplosA[200]={0};

    /* Se imprime en panatalla la funcion del programa */
    cout << "Este programa recibe tres numeros e imprime la suma de todos los multiplos "
            "del primer y segundo numero menores al tercero.\nNota: Si dos multiplos son "
            "iguales solo se tomara uno de estos.\n\n";

    /* Se le pide al usuario que ingrese valores para a, b y c*/
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;

    cout << endl;

    /* Se calculan y imprimen los multiplos de a menores que c */
    for(int i=1; i*a<c; ++i){
        multiplosA[i-1] = i*a;
        suma += i*a;
        cout << i*a << "+";
    }

    /* Se calculan y imprimen los multiplos de b menores que c y diferentes a cualquier multiplo de a */
    for(int i=1; i*b<c; ++i){
        if(!(buscar(multiplosA, i*b))){
            suma += i*b;
            cout << i*b;
        }
        if((i+1)*b>=c){
            cout << "=";
        }else{
            if(!(buscar(multiplosA, (i+1)*b))){
            cout << "+";
            }
        }
    }

    /* Se imprime la suma de los multiplos de a y b no repetidos menores que c*/
    cout << suma << endl;

    return 0;
}

bool buscar(int array[], int num){
    /* Esta funcion se encarga de buscar un numero en un array de enteros */

    for(int i=0; i<200; ++i){
        if(array[i] == num){
            return true;
        }
    }

    return false;
}
