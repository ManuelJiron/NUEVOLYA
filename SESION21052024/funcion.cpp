#include <iostream>
#include "variables.h"
using namespace std;

/*
C - CREATE
R - READ
U - UPDATE
D - DELETE
*/


//CREATE

void addReg();
void addReg(){

    cout << "Datos del estudiante\n";
    cout << "CIF: ";
    scanf(" %[^\n]", people[position].cif);
    cout << "NOMBRES: ";
    scanf(" %[^\n]", people[position].name);
    cout << "APELLIDO: ";
    scanf(" %[^\n]", people[position].lastName);
    cout << "AÑO: ";
    scanf(" %[^\n]", people[position].year);
    position++;
}

//READ
void showReg();
void showReg(){
    for (int i = 0; i < position; i++)
    {
        printf("Nombre: %s %s \nAÑO: %d", people[i].name, people[i].lastName, people[i].year);
        cout << "****************************\n";
    }
    
}


void menu();
void menu(){
    int op = 0;
    do
    {   
        system("cls||clear");
        cout << "1. Agregar \n";
        cout << "2. Mostrar \n";
        cout << "3. Salir \n";
        cout << "Opcion: ";
        cin >> op;
        switch (op)
        {
        case 1:
            addReg();
            system("pause");
            break;
        case 2:
            showReg();
            system("pause");
            break;
        case 3:
            
            break;
        
        default:
            break;
        }
    } while (op !=3);
    
}