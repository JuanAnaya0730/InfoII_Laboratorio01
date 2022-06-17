/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 4. Escriba un programa para leer dos números enteros con el siguiente significado: el
valor del primer número representa una hora del día en un reloj de 24 horas, de modo que 1245
representa las doce y cuarenta y cinco de la tarde. El segundo entero representa un tiempo de
duración de la misma manera, por lo que 345 representa tres horas y 45 minutos. El programa debe
sumar esta duración primer número, y el resultado será impreso en la misma notación, en este caso
1630, que es el tiempo de 3 horas y 45 minutos después de 12:45.
Nota: el formato de salida debe ser: La hora es 1630.
Otra nota: se debe imprimir un mensaje como el siguiente cuando uno de los datos ingresados en
inválido: 1560 es un tiempo invalido.

*/

#include <iostream>

using namespace std;

int main()
{
    int tiempo11, tiempo12, tiempo21, tiempo22, horas, minutos;

    /* Se imprime la funcion del programa */
    cout << "Este programa pide dos tiempos en numeros(de 4 digitos o menos) enteros y dice la hora que arroja la suma de los dos tiempos ingresados.\n"
            "NOTA:Si se ingresa un numero que tenga menos de tres digitos este sera tomado como minutos.\n\n";

    cout << "Ingrese el primer tiempo: ";
    cin >> tiempo11;

    //Se verifica si el primer tiempo es valido
    if(tiempo11>2400 or tiempo11%100>=60){
        cout << "\n" << tiempo11 << " es un tiempo invalido.\n\n\n";
    }
    else{
        cout << "Ingrese el segundo tiempo: ";
        cin >> tiempo21;

        //Se verifica si el segundo tiempo es valido
        if(tiempo21>2400 or tiempo21%100>=60){
            cout << "\n" << tiempo21 << " es un tiempo invalido.\n\n\n";
        }
        else{
            //Se extraen los minutos y horas de cada tiempo
            tiempo12=tiempo11%100;
            tiempo11/=100;
            tiempo22=tiempo21%100;
            tiempo21/=100;

            //Se suman todos los minutos y todas las horas
            minutos=tiempo12+tiempo22;
            horas=tiempo11+tiempo21;

            while(minutos>=60){
                minutos-=60;
                horas++;
                }
            while(horas>24){
                horas-=24;
            }
            if (horas<10 and minutos<10){
                cout << "\nLa hora es: 0" << horas << '0' <<minutos << "\n\n\n";
            }
            else if(horas<10){
                cout << "\nLa hora es: 0" << horas << minutos << "\n\n\n";
            }
            else if(minutos<10){
                cout << "\nLa hora es: " << horas << '0' << minutos << "\n\n\n";
            }
            else{
                cout << "\nLa hora es: " << horas << minutos << "\n\n\n";
            }
        }
    }
    return 0;
}
