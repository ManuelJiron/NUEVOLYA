/*6. Escribe un programa que solicite al usuario ingresar la cantidad de calificaciones
que quiere promediar, luego ingrese esas calificaciones, las almacene en un
arreglo y calcule el promedio.*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    int cantidadNotas;
    int calificaciones[cantidadNotas];
    int i = 1, sumaNotas = 0;
    float promedio;

    cout << "Ingresa la cantidad de calificaciones que quieras poner " << endl;
        cin >> cantidadNotas;

    while (i<=cantidadNotas)
    {
    
        cout << "Ingrese la nota " << i++<< endl;
        cin >> calificaciones[i];
        sumaNotas += calificaciones[i];
       
    }
    promedio = sumaNotas /cantidadNotas;
    cout << "El promedio es igual a: " <<  promedio;

    return 0;
}
