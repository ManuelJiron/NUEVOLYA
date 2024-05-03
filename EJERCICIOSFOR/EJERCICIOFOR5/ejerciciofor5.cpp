/*5. Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70
*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int sumaNota = 0, aprobado = 0, reprobado = 0;
    int alumnos[8];

    for (int i = 0; i <8; i++)
    {
        cout << "Digite la nota del estudiante " << i+1 <<endl;
        cin >> alumnos[i];

        sumaNota += alumnos[i];

        if (alumnos[i] >= 70)
        {
            aprobado ++;
        }
        else
        {
            reprobado ++;
        }

         
         
    }


    float promedio = sumaNota/8;

    cout << "Alumnos aprobados: " << aprobado << endl;
    cout << "Alumnos reprobados: " << reprobado << endl;
    cout << "El promedio de la seccion: " << promedio << endl;
    





    return 0;
}
