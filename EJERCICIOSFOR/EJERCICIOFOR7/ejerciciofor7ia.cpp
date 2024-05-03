/*7. Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector.*/

/* This program calculates the sum of two vectors of equal length */
#include<iostream>

using namespace std;

int main()
{
    // Initialize variables 'vector1', 'vector2', and 'sumVector' with 5 elements each
    int vector1[5], vector2[5], sumVector[5];

    // Prompt user to input the elements of the first vector
    cout << "Ingrese los elementos del primer vector: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> vector1[i];
    }

    // Prompt user to input the elements of the second vector
    cout << "Ingrese los elementos del segundo vector: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> vector2[i];
    }

    // Calculate the sum of the vectors
    for (int i = 0; i < 5; i++)
    {
        sumVector[i] = vector1[i] + vector2[i];
    }

    // Output the sum vector
    cout << "El vector resultante de la suma es: ";
    for (int i = 0; i < 5; i++)
    {
        cout << sumVector[i] << " ";
    }

    // End of program
    return 0;
}