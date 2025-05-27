#include <iostream>
#include <string>
using namespace std;


int main () {
    string nombre, condicion;
    int hora, precio_hora=3, salario;

    //pedimos los datos al usuario
    cout<< "ingrese sunombre: "<<endl;
    cin>> nombre;
    cout<< "ingrese las horas trabajadas: "<<endl;
    cin >> hora;

    //evaluamos las horas y calculamos el salario
    if (hora<=44)
    {
        salario = hora * precio_hora;
    }
    else
    {
        salario = (44 * precio_hora) + +1.5 * precio_hora * (hora - 44);
    }
    
    cout << "El salario de " << nombre << " es: " << salario << endl;
    cout << "¿Desea calcular el salario de otro empleado? (S/N): ";
    cin >> condicion;
    //meintras la condicion sea S o s, se repetira el ciclo, para ello reeescribiremos el codigo dentro del ciclo while
    while (condicion == "S" || condicion == "s") {
        cout << "Ingrese su nombre: ";
        cin >> nombre;
        cout << "Ingrese las horas trabajadas: ";
        cin >> hora;

        if (hora <= 44) {
            salario = hora * precio_hora;
        } else {
            salario = (44 * precio_hora) + 1.5 * precio_hora * (hora - 44);
        }

        cout << "El salario de " << nombre << " es: " << salario << endl;
        cout << "¿Desea calcular el salario de otro empleado? (S/N): ";
        cin >> condicion;
    }
    //cuando diga N entonces saldra y motrara el mensaje de despedida
    cout << "Gracias por usar el programa." << endl;


    return 0;
}