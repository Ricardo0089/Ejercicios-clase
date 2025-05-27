#include <iostream>
using namespace std;

int main (){
    int numero=0, suma=0, posicion=0; //declaramos las variables
    int sumatoria[25]; //planteamos un arreglo de 25 elementos para almecenar

    cout << "Ingrese un numero entero: ";
    cin >> sumatoria [posicion];//una variable que ira contando cuantas posiciones hemos llenado en el arreglo.

    while (sumatoria[posicion]>=0) //chequeamos el nuemro y la posicion en la que esta este 
    {
        suma = sumatoria[posicion]+suma; //sumamos el numero ingresado a la suma
        posicion++; //aumentamos la posicion
        if (posicion < 25) { //verificamos que la posicion no supere el limite del arreglo
            cout << "Ingrese otro numero entero: ";
            cin >> sumatoria[posicion]; //pedimos otro numero y lo guardamos en el arreglo
        } else {
            cout << "El arreglo ha alcanzado su capacidad máxima." << endl;
            break; //salimos del ciclo si el arreglo está lleno
        }
    }
    cout << "La suma de los numeros positivos es: " << suma << endl; //mostramos la suma de los numeros positivos
    
    return 0;
}