/*1. Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.
*/

/* This program calculates the sum of natural numbers from 1 to a given number 'n' */
#include<iostream>

using namespace std;

int main()
{
    // Initialize variables 'n' and 'suma' with 0
    int n, suma = 0;

    // Prompt user to input a number
    cout << "Ingrese un número natural: ";
    cin >> n;

    /* 
    Calculate the sum of natural numbers from 1 to 'n' 
    using the formula: n * (n + 1) / 2 
    */
    suma = (n * (n + 1)) / 2;

    // Output the sum
    cout << "La suma de los números naturales desde 1 hasta " << n << " es: " << suma << endl;

    // End of program
    return 0;
}