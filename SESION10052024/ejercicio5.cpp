/*5. Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego encuentre y muestre el número más grande.*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeros[10];
    int num = 0;

    while (num<10)
    {
        cout << "Ingrese el numero " << num++ << endl;
        cin >> numeros[num];       
    }

    
    



   

    
    
    return 0;
}
