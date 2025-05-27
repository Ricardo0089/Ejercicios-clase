/*Desarrolla un programa que pida ingresar un numero entero, el programa sumara solo los numeros positivos.
El ciclo terminara cuando ingrese un numero negativo. Mostrara la suma al final*/
#include <iostream>
using namespace std;

int main (){
//declaramos las variables
    int numero, suma=0;

    //Pedimos el nuemero 
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    while (numero >= 0)
    {
        suma += numero; //sumamos el numero ingresado a la suma
        cout << "Ingresen otro numero entero: ";
        cin >> numero;
    }
    cout << "La suma de los numeros positivos es: " << suma << endl;

    

    return 0;
}