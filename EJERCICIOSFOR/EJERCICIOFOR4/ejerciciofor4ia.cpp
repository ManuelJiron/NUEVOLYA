/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.
*/

/* This program calculates the average grade of a section with 10 students */
#include<iostream>

using namespace std;

int main()
{
    // Initialize variables 'total' and 'average' with 0
    int total = 0;
    float average = 0;

    // Initialize array 'grades' with 10 elements
    int grades[10];

    // Prompt user to input the grades of 10 students
    cout << "Ingrese las notas de los 10 estudiantes: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> grades[i];
    }

    // Calculate the total of the grades
    for (int i = 0; i < 10; i++)
    {
        total += grades[i];
    }

    // Calculate the average of the grades
    average = (float)total / 10;

    // Output the average
    cout << "El promedio general de la sección es: " << average << endl;

    // End of program
    return 0;
}