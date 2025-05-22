#include <iostream>
using namespace std;

/*los usos que tienen los arreglos son diferentes pues puede tener desde int,float,double, hasta un char que es usado en el sistema americano
ahora cuando se trata de como se usan debemos saber que, los string se escribiran entre doble comillas "", y los enteros sin comillas; ahora si planteamos
ubicaciones tenemos cosas como el nombre de los vectores, eso se hace con los arreglos, ahora como podemos hacer un tablero?.*/

int main (){

    float notas[5] = {4.5,7.9,9.0,8.5,10.0}; //planteamos la variable y sus posiciones, sabiendo que los arregglos tomaran desde valor 0, osea si es 5 su valor es 4
    //cout << "La nota es: "<< notas[3];
    for (int i = 0; i<4 ; i++)
    {
        cout<< "todas las notas"<<notas[i]<<endl;
    }
    return 0;
}