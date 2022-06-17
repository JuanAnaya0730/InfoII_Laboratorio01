/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 16. La serie de Collatz se conforma con la siguiente regla: sea n un elemento de la serie,
si n es par, el siguiente elemento es n/2, y si n es impar, el siguiente elemento es 3n+1.
Escriba un programa que reciba un número k y calcule cual es el elemento inicial j (semilla), menor
que k, que produce la serie más larga y diga cuantos términos m tiene la serie.
Tip: la serie termina al llegar a un elemento cuyo valor sea 1.
Ej: para la semilla 13: 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
Nota: la salida del programa debe ser:
La serie mas larga es con la semilla: j, teniendo m terminos.
Otra nota: se le dará una bonificación si imprime la serie

*/

#include <iostream>

using namespace std;

int calcularsemillamaslarga(int semilla);
        /* La funcion calcularsemillamaslarga calcula que semilla genera la mayor cantidad de datos. */
void imprimirserie(int semilla);
        /* la funcion imprimirserie se encargara de imprimir la serie para la semilla que mas datos genera. */

int main()
{
    int k, i, numerodedatos = 0, semillamaslarga;

    /* Se imprime la funcion del programa */
    cout << "Si desea saber como funciona este programa consulte el problema 16 "
            "del laboratorio 1.\n\n";

    cout << "Ingrese un numero: ";
    cin >> k;

    for(i=k-1; i>0; i--){
        if(calcularsemillamaslarga(i)>numerodedatos){
            numerodedatos=calcularsemillamaslarga(i);
            semillamaslarga=i;
        }
    }
    cout << "\nLa Serie mas larga es con la semilla: " << semillamaslarga <<
            ", teniendo " << calcularsemillamaslarga(semillamaslarga) << " terminos.\n";

    cout << "Para la semilla " << semillamaslarga << ": ";
    imprimirserie(semillamaslarga);

    return 0;
}

int calcularsemillamaslarga(int semilla){

    int siguientenumero, contador;

    siguientenumero=semilla;
    contador=1;

    while(true){
        if(siguientenumero%2==0){
            siguientenumero=siguientenumero/2;
            contador++;
            //cout << siguientenumero << ',';
            if(siguientenumero==1){
                return contador;
            }
        }
        else{
            siguientenumero=siguientenumero*3+1;
            contador++;
            //cout << siguientenumero << ',';
            if(siguientenumero==1){
                return contador;
            }
        }
    }
}

void imprimirserie(int siguientenumero){

    while(true){
        cout << siguientenumero << ',';
        if(siguientenumero%2==0){
            siguientenumero=siguientenumero/2;
            if(siguientenumero==1){
                cout << siguientenumero << ".\n\n\n";
                return;
            }
        }
        else{
            siguientenumero=siguientenumero*3+1;
            if(siguientenumero==1){
                cout << siguientenumero << ".\n\n\n";
                return;
            }
        }
    }
}
