/*8. Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego cuente y muestre la cantidad de números pares
e impares.*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeros[11];
    int pares = 0, impares = 0;
    int i = 1;

    while (i<11)
    {
        cout << "Ingrese el numero: " << i++ << endl;
        cin >> numeros[i];
        
        if (numeros[i]%2==0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }

    cout << "La cantidad de pares es igual a: " << pares << endl;
    cout << "La cantidad de impares es igual a: " << impares << endl;
    return 0;
}
