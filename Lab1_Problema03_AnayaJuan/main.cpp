/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 3. Escriba un programa que debe leer un mes y un día de dicho mes para luego decir
si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero, en dicho caso
imprimir posiblemente año bisiesto.
Nota: el formato de salida debe ser:
14 es un mes invalido.
31/4 es una fecha invalida.
27/4 es una fecha valida.
29/2 es valida en bisiesto.

*/

#include <iostream>

using namespace std;

int main()
{
    int mes; // mes es la variable que almacenara el numero correspondiente al mes
    int dia; // dia es la variable que almacenara el numero correspondiente al dia

    /* Se imprime en panatalla la funcion del programa */
    cout << "Este programa recibe dos numeros que corresponderan a un mes y un dia de dicho "
            "mes, se imprimira en pantalla si la combinacion de mes y dia son validas.\n\n";

    /* Se le pide al usuario que ingrese el numero correspondiente al dia */
    cout << "Ingrese el numero correspondiente al dia: ";
    cin >> dia;

    /* Se le pide al usuario que ingrese el numero correspondiente al mes */
    cout << "Ingrese el numero correspondiente al mes: ";
    cin >> mes;

    /* Se verifica si es mes ingresado es valido*/
    if(mes<1 || mes>12){
        cout << endl << mes << " es un mes invalido." << endl;
    }
    /* Se verifica si los dias ingresados son validos para meses con mas de 30 dias */
    else if((mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) && (dia>0 && dia<=31)){
        cout << endl << dia << '/' << mes << " es una fecha valida." << endl;
    }
    /* Se verifica si los dias ingresados son validos para meses con menos de 30 dias */
    else if(((mes==4 || mes==6 || mes==9 || mes==11) && (dia>0 && dia <=30)) || (mes==2 && (dia>0 && dia<=28))){
        cout << endl << dia << '/' << mes << " es una fecha valida." << endl;
    }
    /* Si se ingresa el 29 de febrero se mostrara que la fecha es valida solo para años bisiestos */
    else if(mes==2 && dia==29){
        cout << endl << dia << '/' << mes << " es valida en bisiesto." << endl;
    }
    /* En caso de no cumplir ninguna de las condiciones anteriores se concluye que la fecha es invalida */
    else{
        cout << endl << dia << '/' << mes << " es una fecha invalida." << endl;
    }

    return 0;
}
