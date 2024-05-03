/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.
*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, suma = 0;

    cout << "Digita un numero y calculare la suma de 1 hasta este mismo: ";
    cin >> n;

    

    for (int i = 1; i <=n; i++)
    {
        suma += i;
    }
    
    cout << "La suma es igual a: " << suma << endl;


    return 0;
}

