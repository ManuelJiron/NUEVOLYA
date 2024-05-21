/*leer un numero y decir si es primo*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n1, cont = 0, i = 1;

    cout << "Digite un numero y le dire si es primo: ";
    cin >> n1;

    while (i <= n1)
    {
        if (n1%i == 0)
        {
            cont++;
        }
        i++;
    }
    if (cont == 2)
    {
        cout << "El numero es primo" << endl;
    }
    else
    {
        cout << "El numero no es primo" << endl;
    }
}
    