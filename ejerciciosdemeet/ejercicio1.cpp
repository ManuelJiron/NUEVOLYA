/*Escribe un programa que permita convertir
temperaturas fahrenheit a grados Celsius. Utilice 
una funcion con parametros*/

#include <iostream>

using namespace std;

float conversor(float temperaturaF);

int main(int argc, char const *argv[])
{
    float temperaturaF;
    cout << "Dime la temperatura en grados Fahrenheit y la convetire a grados Celsius..." << endl;
    cin >> temperaturaF;

    cout << "Temperatura en grados Celsius: " << conversor(temperaturaF);


    return 0;
}


float conversor (float temperaturaF)
{
    return (temperaturaF-32)/1.8;
}