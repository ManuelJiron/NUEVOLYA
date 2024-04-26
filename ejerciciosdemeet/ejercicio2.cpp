/*2.	Escriba el programa que realice las operaciones básicas
 (suma, resta, multiplicación y división), a partir de dos números enteros desconocidos. 
 Utilizar una función diferente por cada operación.  Utilizar función sin parámetros*/

 #include <iostream>

 using namespace std; 

int sumar();
int restar();
int multiplicar();
int dividir();
int salir();

 int main(int argc, char const *argv[])
 {
    int opcion;

    cout << "Bienvenido...." << endl;
    cout << "Opcion 1: sumar..." << endl;
    cout << "Opcion 2: restar...." << endl;
    cout << "Opcion 3: multiplicar...." << endl;
    cout << "Opcion 4: dividir...." << endl;
    cout << "Opcion 5: salir" << endl;

    cin >> opcion;

    switch (opcion)
    {
    case 1:
    cout << sumar ();
        break;
    case 2:
    cout << restar ();
        break;
    case 3:
    cout << multiplicar ();
        break;
    case 4:
    cout << dividir ();
        break;
    case 5:

    cout << "Saliendo..." << endl;
    system("exit");
    
        break;
    
    default: 
    cout << "Opcion invalida..." << endl;
    main(0,0);
        break;
    }

    return 0;
 }
 
 int sumar()
 {
    int num1, num2;
    cout << "Dime dos numeros" << endl;
    cout << "Primer numero: ";
    cin >> num1;
    cout << "Segundo numero: ";
    cin >> num2;
    cout << num1 << " + " << num2 << " = ";
    return num1+num2;

 }
 int restar()
 {
    int num1, num2;
    cout << "Dime dos numeros" << endl;
    cout << "Primer numero: ";
    cin >> num1;
    cout << "Segundo numero: ";
    cin >> num2;
    cout << num1 << " - " << num2 << " = ";
    return num1-num2;

 }
 int multiplicar()
 {
    int num1, num2;
    cout << "Dime dos numeros" << endl;
    cout << "Primer numero: ";
    cin >> num1;
    cout << "Segundo numero: ";
    cin >> num2;
    cout << num1 << " * " << num2 << " = ";
    return num1*num2;

 }
 int dividir()
 {
    int num1, num2;
    cout << "Dime dos numeros" << endl;
    cout << "Primer numero: ";
    cin >> num1;
    cout << "Segundo numero: ";
    cin >> num2;
    if (num2 > 0)
    {
        cout << num1 << " / " << num2 << " = ";
    }
    
    return num1/num2;

 }