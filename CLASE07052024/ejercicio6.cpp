/*Leer un numero y hacer la tabla de multiplicar ese numero*/
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;
    int i = 0;

    while (num <=12)
    {
        int resultado = i*num;
        cout << num << " = " << i << " * " << resultado << endl;
    }
    
    return 0;
}
