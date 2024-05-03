/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float notaEstudiantes, suma = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Digite la nota del estudiante: " << i << endl;
        cin >> notaEstudiantes;
        suma += notaEstudiantes;
    }

    float promedio = suma / 10;
    cout << "El promedio de la sección es: " << promedio << endl;

    return 0;
}
