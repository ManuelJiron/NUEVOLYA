/*7. Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector.*/

#include <iostream>
using namespace std;
#define MAX 3
int vector1[MAX];
int vector2[MAX];
int suma_vectores[MAX];

int main(int argc, char const *argv[])
{
    int num1, num2;
    for (int i = 0; i < MAX; i++)
    {
        cout << "\ningresar numero " << i + 1 << " a vector 1: ";
        cin >> num1;
        vector1[i] = num1;
        cout << "ingresar numero " << i + 1 << " a vector 2: ";
        cin >> num2;
        vector2[i] = num2;
    }
    for (int i = 0; i < MAX; i++)
    {
        suma_vectores[i] = vector1[i] + vector2[i];
    }

    cout << "\nla suma de los dos vectores es: {";
    for (int i = 0; i < MAX; i++)
    {
        if (i == MAX - 1)
        {
            cout << suma_vectores[i] << "}" << endl;
        }
        else
        {
            cout << suma_vectores[i] << ", ";
        }
    }
    return 0;
}
