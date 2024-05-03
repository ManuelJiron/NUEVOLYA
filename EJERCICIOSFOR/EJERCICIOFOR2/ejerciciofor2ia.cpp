/*Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100.
*/

/* This program prints odd numbers from 1 to 100 in descending order */
#include<iostream>

using namespace std;

int main()
{
    // Initialize variable 'num' with 99
    int num = 99;

    // Loop through odd numbers from 99 to 1
    while (num >= 1)
    {
        // Check if the number is odd
        if (num % 2!= 0)
        {
            // Print the odd number
            cout << num << " ";
        }

        // Decrement the number
        num--;
    }

    // End of program
    return 0;
}