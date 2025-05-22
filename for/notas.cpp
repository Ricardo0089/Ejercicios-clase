#include <iostream>
using namespace std;

int main (){
    float nota [5];

    for (int i = 0; i < 5; i++)
    {
       cout << "Escriba la nota: "<<i+1<<endl;
    cin >> nota[i];
    }
    
    cout<<"imrpimiendo las notas";

    for (int j = 0; j < 5; j++)
    {
        cout << "las notas son: "<< nota[j]<<endl;
    }
    
    //ahora imprimamos alrevez, desde el arreglo 4 hasta el 0

    cout<< "imprimiendo alrevez seria: ";
    for (int j = 4; j >= 0 ; j--)
    {
        cout << "las notas son: " << nota[j]<<endl;
    }
    return 0;
}