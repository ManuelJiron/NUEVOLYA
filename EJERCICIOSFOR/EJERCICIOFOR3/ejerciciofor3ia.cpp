/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100.
*/

/* This program calculates the sum of squares of numbers between 1 and 100 */
#include<iostream>

using namespace std;

int main()
{
    // Initialize variable 'sum' with 0
    long long sum = 0;

    // Loop through numbers from 1 to 100
    for (int i = 1; i <= 100; i++)
    {
        // Calculate the square of the number and add it to 'sum'
        sum += i * i;
    }

    // Output the sum
    cout << "La suma de los cuadrados de los números entre 1 y 100 es: " << sum << endl;

    // End of program
    return 0;
}