/*4.	Programa para crear un procedimiento que reciba dos
 variables reales como argumentos e intercambiar sus valores.*/

 #include <iostream>

 using namespace std;

void intercambio (int valor1, int valor2);

 int main(int argc, char const *argv[])
 {
    int valor1, valor2;

    cout << "Digita el primer valor: ";
    cin >> valor1;
    cout << "Digita el segundo valor: ";
    cin >> valor2;

    intercambio(valor1, valor2);

    return 0;
 }
 void intercambio (int valor1, int valor2)
 {
    int temp;

    cout << "Los valores sin intercambiar son: "<< valor1 << ", " << valor2 << endl;
    

    temp = valor1;
    valor1 = valor2;
    valor2 = temp;

    cout << "Los valores intecambiados son: " << valor1 << ", " << valor2;

 }
 