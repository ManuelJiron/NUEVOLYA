/*6. Hacer un programa que sume los números pares comprendidos entre
100 y 200.*/

/* This program calculates the sum of even numbers between 100 and 200 */
#include<iostream>

using namespace std;

int main()
{
    // Initialize variables 'sum' and 'num' with 0
    int sum = 0, num = 100;

    // Loop through numbers from 100 to 200
    while (num <= 200)
    {
        // Check if the number is even
        if (num % 2 == 0)
        {
            // Add the even number to 'sum'
            sum += num;
        }

        // Increment the number
        num++;
    }

    // Output the sum
    cout << "La suma de los números pares entre 100 y 200 es: " << sum << endl;

    // End of program
    return 0;
}