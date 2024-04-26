#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

int main()
{
    int numAlumnos;
    double costoAlumno, costoTotal;
    int opcion;

    cout << "Seleccione una opción:" << endl;
    cout << "1. Opcion 1" << endl;
    cout << "2. Salir" << endl;
    cout << "Ingrese el numero de la opción: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        // Code for option 1
        break;
    case 2:
        // Code for option 2
        break;
    case 3:
        // Code for option 3
        break;
    case 4:
        // Code for exiting the program
        return 0;
    default:
        cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
        break;
    }
    cout << "Ingrese el número de alumnos: ";
    cin >> numAlumnos;

    switch (numAlumnos)
    {
    case 100:
    case 101:
    case 102:
        // ... add more cases for 100 or more students
        costoAlumno = 60.00;
        break;
    case 50:
    case 51:
    case 52:
        // ... add more cases for 50 to 99 students
        costoAlumno = 70.00;
        break;
    case 30:
    case 31:
    case 32:
        // ... add more cases for 30 to 49 students
        costoAlumno = 100.00;
        break;
    default:
        costoAlumno = 0.00;
        break;
    }

    if (costoAlumno > 0.00)
    {
        costoTotal = costoAlumno * numAlumnos;
        cout << "El costo por alumno es de $" << costoAlumno << endl;
        cout << "El costo total a pagar a la compañía de autobuses es de $" << costoTotal << endl;
    }
    else
    {
        costoTotal = 4500.00;
        cout << "El costo por alumno es de $" << costoTotal / numAlumnos << endl;
        cout << "El costo total a pagar a la compañía de autobuses es de $" << costoTotal << endl;
    }

    return 0;
}
