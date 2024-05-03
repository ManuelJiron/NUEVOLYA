/*5. Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70
*/

/* This program calculates the number of approved and failed students, and the average grade of a class with 8 students */
#include<iostream>

using namespace std;

int main()
{
    // Initialize variables 'total', 'approved', 'failed', and 'average' with 0
    int total = 0, approved = 0, failed = 0;
    float average = 0;

    // Initialize array 'grades' with 8 elements
    int grades[8];

    // Prompt user to input the grades of 8 students
    cout << "Ingrese las notas de los 8 estudiantes: ";
    for (int i = 0; i < 8; i++)
    {
        cin >> grades[i];
    }

    // Calculate the total of the grades
    for (int i = 0; i < 8; i++)
    {
        total += grades[i];
    }

    // Calculate the average of the grades
    average = (float)total / 8;

    // Count the number of approved and failed students
    for (int i = 0; i < 8; i++)
    {
        if (grades[i] >= 70)
        {
            approved++;
        }
        else
        {
            failed++;
        }
    }

    // Output the number of approved and failed students, and the average grade
    cout << "Cantidad de alumnos aprobados: " << approved << endl;
    cout << "Cantidad de alumnos reprobados: " << failed << endl;
    cout << "Promedio general del grupo: " << average << endl;

    // End of program
    return 0;
}