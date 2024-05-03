/*8. Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo.
*/

#include <iostream>
using namespace std;
#define MAX 3
int vector1[MAX];
int vector2[MAX];

int main(int argc, char const *argv[])
{
    int num1, num2, producto = 0;
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
        producto += vector1[i] * vector2[i];
    }
    cout << "\nel producto punto de los dos vectores es: " << producto << endl;


    return 0;
}

